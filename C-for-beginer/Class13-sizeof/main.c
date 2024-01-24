#include <stdio.h>

int main(void)
{

  /**
   * sizeof
   * 
   * 參數可以是 資料型別 或 變數名稱 或 常數
   * 回傳單位是 byte , 1 byte = 8 bit
   * 
   * ex: 
   * sizeof(int), sizeof(a), sizeof(12)
  */
  int myNum = 5;
  printf("myNum 的大小是 %d byte\n", sizeof(myNum));
  printf("int 資料型別 的大小是 %d byte\n", sizeof(int));
  printf("int 常數型別 的大小是 %d byte\n", sizeof(4));

  printf("常數型別 點數會變成 double(雙精度浮點數), 大小是 %d byte\n" , sizeof(5.8));

  int myNumSize = sizeof(myNum);
  // sizeof 會回傳一個 int 的值
  printf("myNumSize 的大小是 %d byte\n", myNumSize);

  int myFloat = 5.87;
  printf("myFloat 的大小是 %d byte，因為浮點數被存成整數型別\n", sizeof(myFloat));

  return 0;
}
