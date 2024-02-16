#include <stdio.h>

int main(void)
{

  /**
   * while 循環 語句 
   *
   * 條件 滿足 執行語句
   *      不滿足 跳出執行語句
   * 
   * 循環 (判定條件)
   *      語句;
   * ex:
   * while (表達式) {
   *   循環語句
   * }
   * 
   * 特點: 先判斷表達式，在執行循環體
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

  int i = 1;
  int sum = 0;

  while(i <= 100) {
    printf("當前循環次數 %d\n", i);
    sum = sum + i;
    i++;
  }

  printf("sum = %d\n", sum);

  return 0;
}
