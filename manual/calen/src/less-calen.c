#include <calen.private>
#include <stdbool.h>

/**
 * @brief compare two instance that like as cala < calb.
 * @param (cala) must be a valid instance that be maken by routine on this library.
 * @param (calb) must be a valid instance that be maken by routine on this library.
 * @return return a compared result as boolean.
 */

bool less_calen (calen *cala, calen *calb){
  calen_time caltimea = get_calen_time(cala);
  calen_time caltimeb = get_calen_time(calb);
  return caltimea < caltimeb;
}
