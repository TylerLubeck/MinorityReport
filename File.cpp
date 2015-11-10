#include "pch.h"
#include "File.h"


File::File (std::string root)
    :FilesystemItem(root)
{
    this->file_path_ = root;
}

File::File ( path root )
    :File ( root.string() )
{

}


File::~File ()
{}
