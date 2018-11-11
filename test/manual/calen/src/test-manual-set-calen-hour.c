#include <calen.h>
#include <test.h>

void test_manual_set_calen_hour (){
  
  calen temp;
  
  /* <00:00:00> */
  
  test(init_calen(1, 1, 1, 0, 0, 0, &temp) == 0);
  test(set_calen_hour(0, &temp) == 0);
  test(temp.hour == 0);

  /* <23:00:00> */

  test(init_calen(1, 1, 1, 0, 0, 0, &temp) == 0);
  test(set_calen_hour(23, &temp) == 0);
  test(temp.hour == 23);

  /* <24:00:00> */

  test(init_calen(1, 1, 1, 0, 0, 0, &temp) == 0);
  test(set_calen_hour(24, &temp) != 0);
  test(temp.hour == 0);
  
}
