#pragma once
#include <stdio.h>
#include <stdlib.h>

#define SECOND ((calen_time)(1))
#define MINUTE ((calen_time)(60))
#define HOUR ((calen_time)(60 * 60))
#define DAY ((calen_time)(60 * 60 * 24))

#define test(expression)\
if (expression){\
fprintf(stdout, "[SUCCESS]: %s\n", #expression);\
}\
else {\
fprintf(stderr, "[FAILED]: %s\n", #expression);\
fprintf(stderr, "line of %d in \"%s\".\n", __LINE__, __FILE__);\
exit(1);\
}
