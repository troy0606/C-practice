#include <stdio.h>

int main(void)
{

  /**
   * if else if語句
   *
   * if(條件表達式1)
   *  語句1 (條件表達式1為真時執行，執行後跳出此if語句);
   * else if(條件表達式2)
   *  語句2 (條件表達式2為真時執行，執行後跳出此if語句);
   * else if(條件表達式3)
   *  語句3 (條件表達式3為真時執行，執行後跳出此if語句);
   * ......
   * else
   * 語句n (上面條件表達式都為否時執行，執行後跳出此if語句);
   */

  // 練習

  int aInt = 0;
  int bInt = 0;

  printf("請輸入兩個數字，先輸入一個 enter 後 再輸入一個 再 enter\n");

  scanf("%d\0\n", &aInt);
  scanf("%d\0\n", &bInt);

  if ((aInt * bInt) > 5000)
  {
    printf("aInt %d * bInt %d 比 5000 大\n", aInt, bInt);
  }
  else if ((aInt * bInt) < 5000)
  {
    printf("aInt %d * bInt %d 比 5000 小\n", aInt, bInt);
  }
  else
  {
    printf("aInt %d * bInt %d 等於 5000 \n", aInt, bInt);
  };

  return 0;
}
