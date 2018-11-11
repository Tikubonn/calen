#include <calen.h>
#include <test.h>

void test_manual_get_calen_weekday (){

  calen temp;
  
  /* <2018/11/09 00:00:00> */
  
  test(init_calen(2018, 11, 9, 0, 0, 0, &temp) == 0);
  test(get_calen_weekday(&temp) == CALEN_FRIDAY);
  
  /* <2018/11/10 00:00:00> */
  
  test(init_calen(2018, 11, 10, 0, 0, 0, &temp) == 0);
  test(get_calen_weekday(&temp) == CALEN_SATURDAY);
  
  /* <2018/11/11 00:00:00> */
  
  test(init_calen(2018, 11, 11, 0, 0, 0, &temp) == 0);
  test(get_calen_weekday(&temp) == CALEN_SUNDAY);

  /* <0645/01/01 00:00:00> */
  
  test(init_calen(645, 1, 1, 0, 0, 0, &temp) == 0);
  test(get_calen_weekday(&temp) == CALEN_WEDNESDAY);
  
}
