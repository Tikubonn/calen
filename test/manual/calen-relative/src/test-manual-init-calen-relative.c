#include <calen.h>
#include <test.h>

void test_manual_init_calen_relative (){
  calen_relative rel;
  test(init_calen_relative(0, 0, 0, 0, 0, 0, &rel) == 0);
}
