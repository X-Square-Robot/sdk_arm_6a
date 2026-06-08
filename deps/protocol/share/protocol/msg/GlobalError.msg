# GlobalError.msg
# 系统评估处理后的错误
std_msgs/Header header # 填写status_code里面的时间戳。
uint32 error_code         # 组成：[Domain 8bit] [Unit 8bit] [Error 16bit]
uint8  level
string exception # 通常不建议塞入这里，字符串限制在25个字符以内。