#include <stdio.h>

int main(void)
{

  /**
   * if else語句
   * 
   * if(條件表達式) 
   *  語句1 (條件表達式為真時執行，執行後跳出此if語句);
   * else
   *  語句2 (條件表達式為否時執行，執行後跳出此if語句);
   * 
   */

  // 練習

  int aInt = 0;
  int bInt = 0;

  printf("請輸入兩個數字，先輸入一個 enter 後 再輸入一個 再 enter\n");

  scanf("%d\0\n", &aInt);
  scanf("%d\0\n", &bInt);

  if (aInt > bInt)
  {
    printf("aInt %d 較大\n", aInt);
  } else {
    printf("bInt %d 較大或跟 aInt 一樣大\n", bInt);
  };
  return 0;
}
