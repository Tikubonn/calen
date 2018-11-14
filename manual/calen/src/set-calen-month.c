#include <calen.private>
#define min(a, b) ((a)<(b)?(a):(b))

/**
 * @brief set month to calen instance.
 * @param (month) must be between 1 to 12.
 * @param (calout) setup target that will be modified.
 * @return return an integer that is if success then 0, otherwise non-zero.
 */

int set_calen_month (unsigned int month, calen *calout){
  if (!(1 <= month && month <= 12)){
    return 1;
  }
  calout->month = month;
  int days = calen_month_of_days(calout->year, month);
  calout->day = min(calout->day, days);
  return 0;
}
