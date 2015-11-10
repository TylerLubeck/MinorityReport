#pragma once
#include "FilesystemItem.h"
#include "File.h"
#include <iostream>
#include <vector>
class Folder :
    public FilesystemItem
{
    public:
        Folder ( path root );
        ~Folder ();
        void print_folder_names ();
    
    private:
        void load_folder_contents ();
        std::vector<FilesystemItem*> contents;
};

