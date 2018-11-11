#pragma once
#include <calen.public>
#include <stddef.h>

#define add_calen_temporary(varname, cala, calb)\
calen __ ## varname ## _data;\
calen *varname = &__ ## varname ## _data;\
if (add_calen_manually(cala, calb, varname) != 0){\
varname = NULL;\
}
