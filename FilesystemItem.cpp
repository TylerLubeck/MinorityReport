#include "pch.h"
#include "FilesystemItem.h"


FilesystemItem::FilesystemItem ( path root )
{
    this->file_path_ = root;
}

FilesystemItem::~FilesystemItem()
{
}

std::string FilesystemItem::GetFileIconImage() {
	std::string icon_path;
	switch (this->file_type_) {
		case FileType::FOLDER:
            icon_path = "folder";
            break;
        case FileType::IMAGE:
            icon_path = "image";
            break;
        case FileType::PDF:
            icon_path = "pdf";
            break;
        case FileType::WORD_DOC:
            icon_path = "word_doc";
            break;
        case FileType::UNKNOWN:
		default:
			icon_path = "unknown";
	}
	return icon_path;
}

std::string FilesystemItem::get_path ()
{
    return this->file_path_.string ();
}
