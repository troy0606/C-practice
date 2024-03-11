#include <stdio.h>
#include <string.h>

int main(void)
{

  /**
   * 字串操作函數
   * strcat > 字串拼接
   * strncat > 字串拼接複雜版
   */

  /**
   * strcat 字串拼接
   * 用法: strcat(字串陣列1, 字串陣列2)
   * 原理: 把 字串陣列2 的字串接到 字串陣列1 的字元後面
   * 並刪除 字串陣列1 末尾的結束標誌 '\0'
   */

  // 注意1: 字串陣列1 必須是足夠大的字串
  char strA[6] = "hello";
  char strB[6] = "world";
  char strC[14] = "worldaaaacccc";
  // 沒報錯但不合法，會導致無法預期的狀況
  // 參考: https://stackoverflow.com/questions/51860543/confusion-in-strcat-function-in-c-assumes-the-destination-string-is-large-enoug
  strcat(strA, strB);
  strcat(strB, strC);

  puts(strA);

  // 注意2: strcat 字串陣列1 不能是常量
  /**
   *  strcat 是要改變 字串陣列1 裡面的內存，常量只能訪問不能改變
   */

  /**
   * strncat 字串拼接複雜版
   * 用法: strncat(字串陣列1, 字串陣列2, 取字串2幾個字元)
   */

  char strD[20] = "hello";
  char strE[6] = "world";

  // strncat(strD - 1, strE + 1, 2);
  // 只會印出 r
  // printf("strD, strE %s\n", strD);

  strncat(strD + 1, strE + 1, 2);
  // 會印出 helloor
  /**
   * 解釋: strncat(strD + 1, strE + 1, 2);
   * 字串1 strD hello 都沒變連接的開頭?
   * strE + 1 world 從位置1 字元開始串接
   * 2 取兩個字元
  */ 
  printf("strD, strE %s\n", strD);

  // 練習: 用 strncpy 實現兩字串拼接的功能
  char strF[20] = "abcccdd";
  char strG[] = "123";

  // strcat(strF, strG);

  strncpy(strF + strlen(strF), strG, strlen(strG));
  printf("strF = %s\n", strF);

  return 0;
}
