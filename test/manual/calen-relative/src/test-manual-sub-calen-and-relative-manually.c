#include <calen.h>
#include <test.h>

void test_manual_sub_calen_and_relative_manually (){
  
  calen cal;
  calen_relative rel;
  calen res;
  
  /* <0001/01/01 00:00:00> - <0001/01/01 01:01:01> = error */
  
  test(init_calen(1, 1, 1, 0, 0, 0, &cal) == 0);
  test(init_calen_relative(1, 1, 1, 1, 1, 1, &rel) == 0);
  test(sub_calen_and_relative_manually(&cal, &rel, &res) != 0);
  
  /* <0002/02/02 01:01:01> - <0000/00/00 00:00:00> = <0002/02/02 01:01:01> */

  test(init_calen(2, 2, 2, 1, 1, 1, &cal) == 0);
  test(init_calen_relative(0, 0, 0, 0, 0, 0, &rel) == 0);
  test(sub_calen_and_relative_manually(&cal, &rel, &res) == 0);
  test(res.year == 2);
  test(res.month == 2);
  test(res.day == 2);
  test(res.hour == 1);
  test(res.minute == 1);
  test(res.second == 1);
  
  /* <0002/02/02 01:01:01> - <0001/01/01 01:01:01> = <0001/01/01 00:00:00> */

  test(init_calen(2, 2, 2, 1, 1, 1, &cal) == 0);
  test(init_calen_relative(1, 1, 1, 1, 1, 1, &rel) == 0);
  test(sub_calen_and_relative_manually(&cal, &rel, &res) == 0);
  test(res.year == 1);
  test(res.month == 1);
  test(res.day == 1);
  test(res.hour == 0);
  test(res.minute == 0);
  test(res.second == 0);
  
  /* <2004/02/29 00:00:00> - <0003/00/00 00:00:00> = <2000/02/28 00:00:00> */

  test(init_calen(2004, 2, 29, 0, 0, 0, &cal) == 0);
  test(init_calen_relative(3, 0, 0, 0, 0, 0, &rel) == 0);
  test(sub_calen_and_relative_manually(&cal, &rel, &res) == 0);
  test(res.year == 2001);
  test(res.month == 2);
  test(res.day == 28);
  test(res.hour == 0);
  test(res.minute == 0);
  test(res.second == 0);
  
}
