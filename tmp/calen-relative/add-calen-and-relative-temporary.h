#pragma once
#include <calen.public>
#include <stddef.h>

#define add_calen_and_relative_temporary(varname, cal, rel)\
calen __ ## varname ## _data;\
calen *varname = &__ ## varname ## _data;\
if (add_calen_and_relative_manually(cal, rel, varname)){\
varname = NULL;\
}
