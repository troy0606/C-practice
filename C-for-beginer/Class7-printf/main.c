#include <stdio.h>

int main(void)
{
  int month = 8;
  int day = 2147483648;
  // int day = 0;
  // int day;
  char letter = 'a';
  char string[17] = "multiple letters";

  float floatNum = 12.55;
  double doubleNum = 144.5554321;

  printf("無符號整數day是 %u\n", day);
  printf("符號整數day是 %d\n", day);
  printf("生日是%d月%d號\n", month, day);
  
  printf("字符letter是 %c\n",letter);
  printf("字串string是 %s\n",string);

  // %f 預設可以印小數點後六碼，.?f ?可以決定印小數點後幾碼
  printf("單精度浮點數floatNum是 %f\n", floatNum);
  printf("雙精度浮點數doubleNum是 %.8f\n", doubleNum);
  
  return 0;
}
