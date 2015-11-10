#pragma once
#include "FilesystemItem.h"
class File :
    public FilesystemItem
{
    public:
    File ( std::string root );
    File ( path root );
    ~File ();
};

