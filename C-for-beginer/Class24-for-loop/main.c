#include <stdio.h>

int main(void)
{

  /**
   * for 循環 語句 
   *
   * 條件 滿足 執行語句
   *      不滿足 跳出執行語句
   * 
   * ex:
   * for (表達式1;表達式2;表達式3) {
   *   循環語句
   * }
   * 
   * 流程: 先執行表達式1，判斷表達式2是否成立，執行循環語句，執行表達式3
   *
   * 表達式1 控制變量初始化
   * 表達式2 循環條件
   * 表達式3 控制變量更新
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

  int sum = 0;

  for(int i = 1; i <= 100; i++) {
    printf("當前循環次數 %d\n", i);
    sum = sum + i;
  }

  printf("sum = %d\n", sum);

  // 求 100 以內偶數的和

    int sum1 = 0;

  for(int i = 1; i <= 100; i++) {
    if(i % 2 == 0) {
      printf("當前循環次數 %d\n", i);
      sum1 = sum1 + i;
    }
  }

  printf("sum = %d\n", sum1);

  int sum2 = 0;
  for(int i = 0; i <= 100; i+=2) {
    printf("當前循環次數 %d\n", i);
    sum2 = sum2 + i;
  }

  printf("sum2 = %d\n", sum2);

  // 100 以內 3 的倍數的和

  int sum3 = 0;
  for(int i = 0; i <= 100; i+=3) {
    printf("當前循環次數 %d\n", i);
    sum3 = sum3 + i;
  }

  printf("sum3 = %d\n", sum3);

  // 求 1-2+3-4 ... +99-100

  int sum4 = 0;
  for(int i = 1; i < 100; i+=2) {
    printf("當前循環次數 %d\n", i);
    sum4 = sum4 + (i - (i + 1));
  }
  printf("sum4 = %d\n", sum4);

  /**
   * 注意
   * 1. for 後方的 () 不能省略
   * 2. {} 循環語句可以不用括號包起來，
   * 因為for 循環只認 括號後方語句(複合 or 一般都 ok)
   * 3. 表達式1.2.3 都是任選，可以省略其中1個2個或全部，
   * 但用於間隔的 ; 不能省
   * 4. 如果表達式2 為空，則會當成判斷條件一直為 true
   * 5. 循環語句 循環體裡面可以再放 循環
   * 
  */

  return 0;
}
