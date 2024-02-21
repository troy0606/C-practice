#include <stdio.h>

int main(void)
{

  /**
   * do while 循環 語句 
   *
   * 先執行循環語句一次
   *   再判斷表達式(是否執行下一次循環)
   * 
   * ex:
   * do {
   *   循環語句
   * } 
   * while (表達式1) 
   * 
   * 流程: 先執行循環語句一次，再判斷表達式
   *
   */

  // 從 1 加到 100
  /**
   * 分析
   * sum = 0;
   * sum = sum + 1;
   * sum = sum + 2;
   * sum = sum + 3;
   * ...
   * sum = sum + 100;
  */

  int sum = 0, i = 1;

  do {
    sum += i;
    i++;
  } while (i <= 100);

  printf("sum = %d\n", sum);
  return 0;
}
