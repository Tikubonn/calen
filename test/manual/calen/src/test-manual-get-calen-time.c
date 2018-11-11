#include <calen.h>
#include <test.h>

void test_manual_get_calen_time (){

  calen temp;
  
  /* <0001/01/01 00:00:00> */
  
  test(init_calen(1, 1, 1, 0, 0, 0, &temp) == 0);
  test(get_calen_time(&temp) == (0 * SECOND));
  
  /* <0001/01/01 16:32:32> */
  
  test(init_calen(1, 1, 1, 16, 32, 32, &temp) == 0);
  test(get_calen_time(&temp) == (16 * HOUR) + (32 * MINUTE) + (32 * SECOND));
  
  /* <0002/02/16 16:32:32> */

  test(init_calen(2, 2, 16, 16, 32, 32, &temp) == 0);
  test(get_calen_time(&temp) == (365 * 1 * DAY) + (31 * 1 * DAY) + (15 * DAY) + (16 * HOUR) + (32 * MINUTE) + (32 * SECOND));
  
  /* <0004/02/29 16:32:32> */

  test(init_calen(4, 2, 29, 16, 32, 32, &temp) == 0);
  test(get_calen_time(&temp) == (365 * 3 * DAY) + (31 * 1 * DAY) + (28 * DAY) + (16 * HOUR) + (32 * MINUTE) + (32 * SECOND));
  
  /* <0004/03/01 16:32:32> */

  test(init_calen(4, 3, 1, 16, 32, 32, &temp) == 0);
  test(get_calen_time(&temp) == (365 * 3 * DAY) + (31 * 1 * DAY) + (29 * DAY) + (16 * HOUR) + (32 * MINUTE) + (32 * SECOND));
  
  /* <0401/03/01 16:32:32> */
  
  test(init_calen(401, 3, 1, 16, 32, 32, &temp) == 0);
  test(get_calen_time(&temp) == (365 * DAY * 303) + (366 * DAY * 97) - (DAY) + (31 * 1 * DAY) + (29 * DAY) + (16 * HOUR) + (32 * MINUTE) + (32 * SECOND));
  
}
