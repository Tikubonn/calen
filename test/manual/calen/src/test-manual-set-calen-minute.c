#include <calen.h>
#include <test.h>

void test_manual_set_calen_minute (){
  
  calen temp;
  
  /* <00:00:00> */
  
  test(init_calen(1, 1, 1, 0, 0, 0, &temp) == 0);
  test(set_calen_minute(0, &temp) == 0);
  test(temp.minute == 0);

  /* <00:59:00> */

  test(init_calen(1, 1, 1, 0, 0, 0, &temp) == 0);
  test(set_calen_minute(59, &temp) == 0);
  test(temp.minute == 59);

  /* <00:60:00> */

  test(init_calen(1, 1, 1, 0, 0, 0, &temp) == 0);
  test(set_calen_minute(60, &temp) != 0);
  test(temp.minute == 0);
  
}
