# UnitError.msg
# 某单元当前仍然存在的错误

uint8 error_code         # 单元定义的错误码（不含 domain/unit）
uint8 level           # 0表示info 1表示warning,2表示error,3表示fatal

string exception # 一些额外的信息，通常不建议将信息塞入这里。字符串长度限制在25以内。