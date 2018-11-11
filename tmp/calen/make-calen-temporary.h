#pragma once
#include <calen.public>
#include <stddef.h>

#define make_calen_temporary(varname, year, month, day, hour, minute, second)\
calen __ ## varname ## _data;\
calen *varname = &__ ## varname ## _data;\
if (init_calen(year, month, day, hour, minute, second, varname)){\
varname = NULL;\
}
