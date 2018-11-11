#include <calen.h>
#include <test.h>

void test_manual_set_calen_second (){
  
  calen temp;
  
  /* <00:00:00> */
  
  test(init_calen(1, 1, 1, 0, 0, 0, &temp) == 0);
  test(set_calen_second(0, &temp) == 0);
  test(temp.second == 0);

  /* <00:00:59> */

  test(init_calen(1, 1, 1, 0, 0, 0, &temp) == 0);
  test(set_calen_second(59, &temp) == 0);
  test(temp.second == 59);

  /* <00:00:60> */

  test(init_calen(1, 1, 1, 0, 0, 0, &temp) == 0);
  test(set_calen_second(60, &temp) != 0);
  test(temp.second == 0);
  
}
