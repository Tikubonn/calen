#include <calen.private>
#include <stdbool.h>

/**
 * @fn 
 * this check argument of year is leap year or not.
 * this dont check argument, so you always must give this valid argument.
 * @param (year) must be over 1.
 * @return return checked result.
 */

static bool __uruup (int year){
  return 
    (year % 400 == 0) ||
    ((year % 4 == 0) && 
     (year % 100 != 0));
}

/**
 * @fn
 * return month of days as integer.
 * this dont check argument, so you always must give this valid arguments.
 * @param (year) must be over 1.
 * @param (month) must be between 1 to 12.
 * @return month of days.
 */

int calen_month_of_days (int year, int month){
  switch (month){
    case  1: return 31;
    case  2: return __uruup(year) ? 29: 28;
    case  3: return 31;
    case  4: return 30;
    case  5: return 31;
    case  6: return 30;
    case  7: return 31;
    case  8: return 31;
    case  9: return 30;
    case 10: return 31;
    case 11: return 30;
    case 12: return 31;
    default: return 0; /* undefined month */
  }
}
