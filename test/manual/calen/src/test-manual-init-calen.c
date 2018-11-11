#include <calen.h>
#include <test.h>

void test_manual_init_calen (){

  calen temp;
  
  /* year */
  
  test(init_calen(0, 1, 1, 0, 0, 0, &temp) != 0);
  test(init_calen(1, 1, 1, 0, 0, 0, &temp) == 0);
  
  /* month */
  
  test(init_calen(1, 0, 1, 0, 0, 0, &temp) != 0);
  test(init_calen(1, 1, 1, 0, 0, 0, &temp) == 0);
  test(init_calen(1, 12, 1, 0, 0, 0, &temp) == 0);
  test(init_calen(1, 13, 1, 0, 0, 0, &temp) != 0);
  
  /* day */
  
  test(init_calen(1, 1, 0, 0, 0, 0, &temp) != 0);
  test(init_calen(1, 1, 1, 0, 0, 0, &temp) == 0);
  test(init_calen(1, 1, 31, 0, 0, 0, &temp) == 0);
  test(init_calen(1, 1, 32, 0, 0, 0, &temp) != 0);
  
  test(init_calen(1, 2, 0, 0, 0, 0, &temp) != 0);
  test(init_calen(1, 2, 1, 0, 0, 0, &temp) == 0);
  test(init_calen(1, 2, 28, 0, 0, 0, &temp) == 0);
  test(init_calen(1, 2, 29, 0, 0, 0, &temp) != 0);
  
  test(init_calen(4, 2, 0, 0, 0, 0, &temp) != 0);
  test(init_calen(4, 2, 1, 0, 0, 0, &temp) == 0);
  test(init_calen(4, 2, 29, 0, 0, 0, &temp) == 0);
  test(init_calen(4, 2, 30, 0, 0, 0, &temp) != 0);
  
  /* hour */
  
  test(init_calen(1, 1, 1, 0, 0, 0, &temp) == 0);
  test(init_calen(1, 1, 1, 23, 0, 0, &temp) == 0);
  test(init_calen(1, 1, 1, 24, 0, 0, &temp) != 0);
  
  /* minute */
  
  test(init_calen(1, 1, 1, 0, 0, 0, &temp) == 0);
  test(init_calen(1, 1, 1, 0, 59, 0, &temp) == 0);
  test(init_calen(1, 1, 1, 0, 60, 0, &temp) != 0);
  
  /* second */
  
  test(init_calen(1, 1, 1, 0, 0, 0, &temp) == 0);
  test(init_calen(1, 1, 1, 0, 0, 59, &temp) == 0);
  test(init_calen(1, 1, 1, 0, 0, 60, &temp) != 0);
  
}
