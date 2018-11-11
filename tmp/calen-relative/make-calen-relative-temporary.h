#pragma once
#include <calen.public>
#include <stddef.h>

#define make_calen_relative_temporary(varname, year, month, day, hour, minute, second)\
calen_relative __ ## varname ## _data;\
calen_relative *varname = &__ ## varname ## _data;\
if (init_calen_relative(year, month, day, hour, minute, second, varname)){\
varname = NULL;\
}
