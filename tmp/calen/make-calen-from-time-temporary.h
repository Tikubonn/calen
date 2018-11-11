#pragma once
#include <calen.public>
#include <stddef.h>

#define make_calen_from_time_temporary(varname, time)\
calen __ ## varname ## _data;\
calen *varname = &__ ## varname ## _data;\
if (init_calen_from_time(time, varname) != 0){\
varname = NULL;\
}
