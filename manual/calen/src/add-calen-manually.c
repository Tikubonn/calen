#include <calen.private>

/**
 * @brief add calen instance by instance then write result to another instance.
 * @param (cala) must be a valid instance that be maken by routine on this library.
 * @param (calb) must be a valid instance that be maken by routine on this library.
 * @param (calout) setup target that will be modified.
 * @return return an integer that is if success then 0, otherwise non-zero.
 */

int add_calen_manually (calen *cala, calen *calb, calen *calout){
  calen_time caltimea = get_calen_time(cala);
  calen_time caltimeb = get_calen_time(calb);
  return init_calen_from_time(caltimea + caltimeb, calout);
}
