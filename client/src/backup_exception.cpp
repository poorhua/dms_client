#include "header/backup_exception.h"

using std::string;

BackupException::BackupException()
{
    ClientException("备份时异常");
}

BackupException::BackupException(const string &msg):ClientException(msg)
{
}