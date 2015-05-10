#ifndef ReferenceStruct_HPP_
#define ReferenceStruct_HPP_

#include "Indstillinger.hpp"
#include "DataLog.hpp"
#include "Monitor.hpp"
#include "SystemLog.hpp"

struct ReferenceStruct
{
    Indstillinger* indstillinger;
    DataLog* dataLog;
    Monitor* monitor;
    SystemLog* systemlog;
};
#endif
