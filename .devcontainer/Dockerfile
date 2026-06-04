ARG BASE_IMAGE=zbl_arm_6a_sdk:base_latest
FROM ${BASE_IMAGE}

ARG USERNAME="xr"

USER root

# Create user with sudo and hardware group privileges (idempotent)
RUN if ! id -u "${USERNAME}" >/dev/null 2>&1; then \
        useradd -m -s /bin/bash "${USERNAME}"; \
        echo "${USERNAME}:${USERNAME}" | chpasswd; \
    fi && \
    usermod -aG sudo,dialout,video "${USERNAME}" && \
    echo "${USERNAME} ALL=(ALL) NOPASSWD:ALL" >> /etc/sudoers && \
    mkdir -p /opt/xr/core/install /usr/local/lib && \
    chown -R "${USERNAME}:${USERNAME}" /opt/xr && \
    mkdir -p "/home/${USERNAME}/workspace" && \
    chown -R "${USERNAME}:${USERNAME}" "/home/${USERNAME}"

# Pre-built ROS2 packages and shared libraries shipped with the SDK
COPY deps/ /opt/xr/core/install/
COPY lib/  /usr/local/lib/

# ABI compatibility check: deps/SNAPSHOT_DATE is stamped by arm_sdk CI with the
# ROS 2 snapshot date that deps/ was compiled against. /opt/xr/BASE_SNAPSHOT_DATE
# is stamped by Dockerfile.base with this base image's ROS 2 snapshot date.
# They MUST match — otherwise the prebuilt .so files in deps/ will be linked
# against ROS 2 symbol versions that the runtime does not expose, leading to
# obscure SIGSEGVs or "undefined symbol" failures at startup.
# Both files optional for backwards compatibility with deps/ predating this check.
RUN DEPS_FILE=/opt/xr/core/install/SNAPSHOT_DATE; \
    BASE_FILE=/opt/xr/BASE_SNAPSHOT_DATE; \
    if [ -f "$DEPS_FILE" ] && [ -f "$BASE_FILE" ]; then \
        DEPS_DATE=$(tr -d '[:space:]' < "$DEPS_FILE"); \
        BASE_DATE=$(tr -d '[:space:]' < "$BASE_FILE"); \
        if [ "$DEPS_DATE" != "$BASE_DATE" ]; then \
            echo ""; \
            echo "============================================================"; \
            echo "ERROR: ROS 2 snapshot mismatch between deps/ and base image"; \
            echo "  deps/ was built against snapshot: $DEPS_DATE"; \
            echo "  base image ROS 2 snapshot:        $BASE_DATE"; \
            echo ""; \
            echo "Fix one of the following:"; \
            echo "  1) Set ROS2_SNAPSHOT_DATE=$DEPS_DATE in"; \
            echo "     .devcontainer/Dockerfile.base and rebuild the base image."; \
            echo "  2) Pull a deps/ release that was built against $BASE_DATE."; \
            echo "============================================================"; \
            exit 1; \
        fi; \
        echo "ABI check OK: deps/ and base image both at ROS 2 snapshot $BASE_DATE"; \
    else \
        echo "WARNING: SNAPSHOT_DATE missing in deps/ or base image — skipping ABI check"; \
        echo "  (deps/ predates snapshot pinning, or base image was not rebuilt)"; \
    fi

RUN chown -R ${USERNAME}:${USERNAME} /opt/xr/core/install

USER ${USERNAME}
WORKDIR /home/${USERNAME}

RUN echo "source /opt/ros/jazzy/setup.bash"          >> ~/.bashrc && \
    echo "source /opt/xr/core/install/setup.bash"    >> ~/.bashrc && \
    echo "export LD_LIBRARY_PATH=\${LD_LIBRARY_PATH}:/usr/local/lib" >> ~/.bashrc && \
    echo "export ROS_DOMAIN_ID=134" >> ~/.bashrc

RUN echo "-----Setup is complete!-----"
