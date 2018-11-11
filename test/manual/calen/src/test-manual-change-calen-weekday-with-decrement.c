#include <calen.h>
#include <test.h>

void test_manual_change_calen_weekday_with_decrement (){
  
  calen temp;
  
  /* <2018/11/10 00:00:00> to <2018/11/09 00:00:00> */
  
  test(init_calen(2018, 11, 10, 0, 0, 0, &temp) == 0);
  test(change_calen_weekday_with_decrement(CALEN_FRIDAY, &temp) == 0);
  test(get_calen_weekday(&temp) == CALEN_FRIDAY);
  test(temp.year == 2018);
  test(temp.month == 11);
  test(temp.day == 9);
  
  /* <2018/11/10 00:00:00> to <2018/10/28 00:00:00> */
  
  test(init_calen(2018, 11, 10, 0, 0, 0, &temp) == 0);
  test(change_calen_weekday_with_decrement(CALEN_SUNDAY, &temp) == 0);
  test(get_calen_weekday(&temp) == CALEN_SUNDAY);
  test(temp.year == 2018);
  test(temp.month == 10);
  test(temp.day == 28);
  
}
