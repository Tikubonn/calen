#include <calen.private>
#include <stdlib.h>

/**
 * @brief free a `calen_relative` instance that is maken by automatic routines.
 * @param (rel) must be valid instance that is maken by this libraries routine.
 * @return always success.
 */

void free_calen_relative (calen_relative *rel){
  free(rel);
}
