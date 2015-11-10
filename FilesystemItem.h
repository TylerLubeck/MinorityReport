#pragma once
#include "FileType.h"
using namespace std::tr2::sys;
class FilesystemItem
{
	public:
		FilesystemItem(path root);
		~FilesystemItem();
		
		std::string GetFileIconImage();
        std::string get_path ();

    protected:
		std::string name_;
		path file_path_;
		FileType file_type_;

};