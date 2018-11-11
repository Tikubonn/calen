#include <calen.h>
#include <test.h>

void test_manual_init_calen_from_time (){
  
  calen temp;
  
  /* <0001/01/01 00:00:00> */
  
  test(init_calen_from_time((0 * SECOND), &temp) == 0);
  test(temp.year == 1);
  test(temp.month == 1);
  test(temp.day == 1);
  test(temp.hour == 0);
  test(temp.minute == 0);
  test(temp.second == 0);
  
  /* <0001/01/01 00:00:32> */
  
  test(init_calen_from_time((32 * SECOND), &temp) == 0);
  test(temp.year == 1);
  test(temp.month == 1);
  test(temp.day == 1);
  test(temp.hour == 0);
  test(temp.minute == 0);
  test(temp.second == 32);
  
  /* <0001/01/01 00:32:32> */
  
  test(init_calen_from_time((32 * MINUTE) + (32 * SECOND), &temp) == 0);
  test(temp.year == 1);
  test(temp.month == 1);
  test(temp.day == 1);
  test(temp.hour == 0);
  test(temp.minute == 32);
  test(temp.second == 32);
  
  /* <0001/01/01 02:32:32> */
  
  test(init_calen_from_time((2 * HOUR) + (32 * MINUTE) + (32 * SECOND), &temp) == 0);
  test(temp.year == 1);
  test(temp.month == 1);
  test(temp.day == 1);
  test(temp.hour == 2);
  test(temp.minute == 32);
  test(temp.second == 32);
  
  /* <0001/01/09 02:32:32> */
  
  test(init_calen_from_time((8 * DAY) + (2 * HOUR) + (32 * MINUTE) + (32 * SECOND), &temp) == 0);
  test(temp.year == 1);
  test(temp.month == 1);
  test(temp.day == 9);
  test(temp.hour == 2);
  test(temp.minute == 32);
  test(temp.second == 32);
  
  /* <0001/02/01 02:32:32> */
  
  test(init_calen_from_time((31 * DAY) + (2 * HOUR) + (32 * MINUTE) + (32 * SECOND), &temp) == 0);
  test(temp.year == 1);
  test(temp.month == 2);
  test(temp.day == 1);
  test(temp.hour == 2);
  test(temp.minute == 32);
  test(temp.second == 32);
  
  /* <0002/01/01 02:32:32> */
  
  test(init_calen_from_time((365 * DAY) + (2 * HOUR) + (32 * MINUTE) + (32 * SECOND), &temp) == 0);
  test(temp.year == 2);
  test(temp.month == 1);
  test(temp.day == 1);
  test(temp.hour == 2);
  test(temp.minute == 32);
  test(temp.second == 32);
  
  /* <0004/02/29 02:32:32> */
  
  test(init_calen_from_time((365 * 3 * DAY) + (31 * 1 * DAY) + (28 * DAY) + (2 * HOUR) + (32 * MINUTE) + (32 * SECOND), &temp) == 0);
  test(temp.year == 4);
  test(temp.month == 2);
  test(temp.day == 29);
  test(temp.hour == 2);
  test(temp.minute == 32);
  test(temp.second == 32);
  
  /* <0004/03/01 02:32:32> */
  
  test(init_calen_from_time((365 * 3 * DAY) + (31 * 1 * DAY) + (29 * DAY) + (2 * HOUR) + (32 * MINUTE) + (32 * SECOND), &temp) == 0);
  test(temp.year == 4);
  test(temp.month == 3);
  test(temp.day == 1);
  test(temp.hour == 2);
  test(temp.minute == 32);
  test(temp.second == 32);

  /* <0401/03/01 02:32:32> */
  
  test(init_calen_from_time(((365 * 303 * DAY) + (366 * 97 * DAY)) + (31 * DAY) + (28 * DAY) + (2 * HOUR) + (32 * MINUTE) + (32 * SECOND), &temp) == 0);
  test(temp.year == 401);
  test(temp.month == 3);
  test(temp.day == 1);
  test(temp.hour == 2);
  test(temp.minute == 32);
  test(temp.second == 32);
  
}
