#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  printf("型態\t\t大小（bytes）\n");
  printf("note: 1 bytes = 8 bit\n");
  printf("整數--------\n");
  printf("short\t\t%lu\n", sizeof(short));
  /**
   * 1(0) + 4294967295 = 2 的 32 次方(32 bit)
   * 0 ~ 4294967295
   * 十進制無符號整數表示範圍
   **/
  // int day = 4294967296;

  /**
   * 1(0) + 2147483648 + 2147483647 = 2 的 32 次方(32 bit)
   * -2147483648 ~ 2147483647
   * 十進制符號整數表示範圍
   **/
  printf("int\t\t%lu\n", sizeof(int));
  printf("long\t\t%lu\n", sizeof(long));
  printf("整數--------\n");
  printf("浮點數--------\n");
  /**
   * 資料型態	|指數域長度（bit）|指數偏移量	|小數域長度（bit）
   * float	  |8	             |  127	    |  23
   * double	  |11	             |  1023	  |  52
   * 
   * ex: float 7.5 > IEEE-754 正負數(0)[0為正1為負] + 指數(10000001)[129=偏移量(127)+2的指數(2):超額表示法]+小數(11100000000000000000000)[3.5]
  */
  printf("float\t\t%lu\n", sizeof(float));
  printf("double\t\t%lu\n", sizeof(double));
  printf("long double\t%lu\n", sizeof(long double));
  printf("浮點數--------\n");
  printf("字元--------\n");
  printf("char\t\t%lu\n", sizeof(char));

  // 參考: https://openhome.cc/Gossip/CGossip/Datatype.html
  return 0;
}