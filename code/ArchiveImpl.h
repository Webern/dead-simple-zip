#pragma once
#include "Archive.h"
#include <cstdint>
#include <vector>
#include <string>

namespace dszpr
{
    class ArchiveImpl : public dszip::Archive
    {
    public:
        ArchiveImpl();
        ArchiveImpl( const std::string& inZipFilepath );
        ArchiveImpl( const std::vector<uint8_t>& inZipFileBuffer );
    };
}
