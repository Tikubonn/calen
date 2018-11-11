#include <calen.h>
#include <test.h>

void test_manual_change_calen_weekday_with_increment (){
  
  calen temp;
  
  /* <2018/11/10 00:00:00> to <2018/11/10 00:00:00> */
  
  test(init_calen(2018, 11, 10, 0, 0, 0, &temp) == 0);
  test(change_calen_weekday_with_increment(CALEN_SATURDAY, &temp) == 0);
  test(get_calen_weekday(&temp) == CALEN_SATURDAY);
  test(temp.year == 2018);
  test(temp.month == 11);
  test(temp.day == 10);
  
  /* <2018/11/10 00:00:00> to <2018/11/11 00:00:00> */
  
  test(init_calen(2018, 11, 10, 0, 0, 0, &temp) == 0);
  test(change_calen_weekday_with_increment(CALEN_SUNDAY, &temp) == 0);
  test(get_calen_weekday(&temp) == CALEN_SUNDAY);
  test(temp.year == 2018);
  test(temp.month == 11);
  test(temp.day == 11);
  
  /* <2018/11/10 00:00:00> to <2018/11/12 00:00:00> */
  
  test(init_calen(2018, 11, 10, 0, 0, 0, &temp) == 0);
  test(change_calen_weekday_with_increment(CALEN_MONDAY, &temp) == 0);
  test(get_calen_weekday(&temp) == CALEN_MONDAY);
  test(temp.year == 2018);
  test(temp.month == 11);
  test(temp.day == 12);
  
}
