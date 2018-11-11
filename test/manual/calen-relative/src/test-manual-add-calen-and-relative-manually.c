#include <calen.h>
#include <test.h>

void test_manual_add_calen_and_relative_manually (){
  
  calen cal;
  calen_relative rel;
  calen res;
  
  /* <0001/01/01 00:00:00> + <0000/00/00 00:00:00> = <0001/01/01 00:00:00> */
  
  test(init_calen(1, 1, 1, 0, 0, 0, &cal) == 0);
  test(init_calen_relative(0, 0, 0, 0, 0, 0, &rel) == 0);
  test(add_calen_and_relative_manually(&cal, &rel, &res) == 0);
  test(res.year == 1);
  test(res.month == 1);
  test(res.day == 1);
  test(res.hour == 0);
  test(res.minute == 0);
  test(res.second == 0);
  
  /* <0001/01/01 00:00:00> + <0000/00/01 02:02:01> = <0001/01/02 01:01:01> */

  test(init_calen(1, 1, 1, 0, 0, 0, &cal) == 0);
  test(init_calen_relative(0, 0, 0, (24 +1), (60 +1), (60 +1), &rel) == 0);
  test(add_calen_and_relative_manually(&cal, &rel, &res) == 0);
  test(res.year == 1);
  test(res.month == 1);
  test(res.day == 2);
  test(res.hour == 2);
  test(res.minute == 2);
  test(res.second == 1);
  
  /* <0001/01/01 00:00:00> + <0001/01/01 01:01:01> = <0002/02/02 01:01:01> */

  test(init_calen(1, 1, 1, 0, 0, 0, &cal) == 0);
  test(init_calen_relative(1, 1, 1, 1, 1, 1, &rel) == 0);
  test(add_calen_and_relative_manually(&cal, &rel, &res) == 0);
  test(res.year == 2);
  test(res.month == 2);
  test(res.day == 2);
  test(res.hour == 1);
  test(res.minute == 1);
  test(res.second == 1);
  
  /* <0001/01/01 00:00:00> + <0001/00/00 00:00:00> = <0002/01/01 00:00:00> */

  test(init_calen(1, 1, 1, 0, 0, 0, &cal) == 0);
  test(init_calen_relative(1, 0, 0, 0, 0, 0, &rel) == 0);
  test(add_calen_and_relative_manually(&cal, &rel, &res) == 0);
  test(res.year == 2);
  test(res.month == 1);
  test(res.day == 1);
  test(res.hour == 0);
  test(res.minute == 0);
  test(res.second == 0);
  
  /* <0001/01/01 00:00:00> + <0004/00/00 00:00:00> = <0005/01/01 00:00:00> */
  
  test(init_calen(1, 1, 1, 0, 0, 0, &cal) == 0);
  test(init_calen_relative(4, 0, 0, 0, 0, 0, &rel) == 0);
  test(add_calen_and_relative_manually(&cal, &rel, &res) == 0);
  test(res.year == 5);
  test(res.month == 1);
  test(res.day == 1);
  test(res.hour == 0);
  test(res.minute == 0);
  test(res.second == 0);
  
}
