#include "code/ArchiveImpl.h"
#include "code/dependencies/minizip/mz.h"
#include "code/dependencies/minizip/mz_os.h"
#include "code/dependencies/minizip/mz_strm.h"
#include "code/dependencies/minizip/mz_strm_buf.h"
#include "code/dependencies/minizip/mz_strm_split.h"
#include "code/dependencies/minizip/mz_zip.h"

namespace dszpr
{
    ArchiveImpl::ArchiveImpl( const std::string& inZipFilepath )
    {
        void* file_stream = nullptr;
        void* split_stream = nullptr;
        void* buf_stream = nullptr;

        mz_stream_os_create( &file_stream );
        mz_stream_buffered_create( &buf_stream );
        mz_stream_split_create( &split_stream );

        mz_stream_split_delete( &split_stream );
        mz_stream_buffered_delete( &buf_stream );
        mz_stream_os_delete( &file_stream );
    }

}

//err = mz_stream_open(split_stream, path, mode);

//void *handle = NULL;
//void *file_stream = NULL;
//void *split_stream = NULL;
//void *buf_stream = NULL;
//char *path = NULL;
//char *password = NULL;
//char *destination = NULL;
//char *filename_to_extract = NULL;

//mz_stream_os_create(&file_stream);
//mz_stream_buffered_create(&buf_stream);
//mz_stream_split_create(&split_stream);

//mz_stream_split_delete(&split_stream);
//mz_stream_buffered_delete(&buf_stream);
//mz_stream_os_delete(&file_stream);