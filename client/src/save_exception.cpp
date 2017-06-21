#include "header/save_exception.h"

/**************************************************
*作者：wu heng
*函数名：SaveException()
*功能：保存异常类默认构造函数
*输入参数：none
*输出参数：none
*返回值：none
**************************************************/
SaveException::SaveException():ClientException("Save Exception")
{
}

/**************************************************
*作者：wu heng
*函数名：SaveException(const string& msg)
*功能：保存异常类带参数构造函数
*输入参数：msg
*输出参数：none
*返回值：none
**************************************************/
SaveException::SaveException(const string &msg):ClientException(msg)
{
}
