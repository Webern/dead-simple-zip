#pragma once

#include "Archive.h"

#include <cstdint>
#include <string>
#include <vector>

namespace dszip
{
    class Factory
    {
        /// open an archive from an existing zip file using the filepath
        static Archive& create( const std::string& inZipFileName );

        /// open an archive from a zip file that is in memory as a buffer of bytes
        static Archive& create( const std::vector<uint8_t>& inZipFileBuffer );

        /// create an empty archive
        static Archive& create();

    private:
        Factory& getInstance();
        Factory();
    };
}