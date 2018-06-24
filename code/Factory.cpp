#include "Factory.h"
#include "code/ArchiveImpl.h"

namespace dszip
{
    Factory::Factory()
    {

    }

    Factory&
    Factory::getInstance()
    {
        static Factory instance{};
        return instance;
    }
}
