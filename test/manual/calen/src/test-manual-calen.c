#include <calen.h>
#include <test.h>

void test_manual_calen (){
  test_manual_init_calen();
  test_manual_init_calen_from_time();
  test_manual_get_calen_time();
  test_manual_add_calen_manually();
  test_manual_sub_calen_manually();
  test_manual_equal_calen();
  test_manual_unequal_calen();
  test_manual_less_calen();
  test_manual_lesseq_calen();
  test_manual_great_calen();
  test_manual_greateq_calen();
  test_manual_set_calen_year();
  test_manual_set_calen_month();
  test_manual_set_calen_day();
  test_manual_set_calen_hour();
  test_manual_set_calen_minute();
  test_manual_set_calen_second();
  test_manual_get_calen_weekday();
}
