#include <calen.private>
#include <stdlib.h>

/**
 * @brief free a calen instance.
 * @param (cal) must be valid instance that is maken by this libraries routine.
 * @return always success.
 */

void free_calen (calen *cal){
  free(cal);
}
