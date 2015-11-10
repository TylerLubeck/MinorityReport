#include "pch.h"
#include "Folder.h"
#include <iostream>


Folder::Folder ( path root )
    :FilesystemItem ( root )
{
    if ( is_directory ( this->file_path_ ) )
    {
        this->file_type_ = FileType::FOLDER;
    }
    this->load_folder_contents ();
}


Folder::~Folder ()
{}

void Folder::load_folder_contents ()
{
    for ( directory_iterator it ( this->file_path_ ); it != directory_iterator (); ++it )
    {
        if ( is_directory ( it->status () ) )
        {
            this->contents.push_back ( new Folder ( it->path () ) );
        }
        else if ( is_regular_file ( it->status () ) )
        {
            this->contents.push_back ( new File ( it->path () ) );
        }
    }
}

void Folder::print_folder_names ()
{
#ifdef _DEBUG
    for ( std::vector<FilesystemItem*>::iterator it = contents.begin (); it != contents.end (); ++it )
    {
        OutputDebugStringA ( (( *it )->get_path () + "\n").c_str() ); 
    }
#endif
}
