#include <stdio.h>
#include <string.h>

/**
 * 1. 寫一個函數輸入4位整數，要求輸出這4個字符
 * 但每兩個之間隔1個空格
 */
void displayIntToChar(int A)
{
  char printString[6];
  // 初始將所有位置內容都先還原成 空字符
  memset(printString, '\0', sizeof(printString));
  // 土法煉鋼判斷數值在合法四位數整數中
  if (A >= 1000 && A <= 9999)
  {
    for (int i = 3; i >= 0; i--)
    {
      int powBase = 1;
      if (i > 0)
      {
        // 土法煉鋼取得最大一位
        for (int j = 0; j < i; j++)
        {
          powBase *= 10;
        }
      }
      int B = A/powBase;
      // 用剩餘拿到取完最大一位後的值
      A = A % powBase;
      char C[2];
      // 整數轉字串
      sprintf(C, "%d", B);
      strcat(printString, C);
      // 如果是第2個數字後面要多帶 空字串 跟第3個數字連接用
      if(i==2) {
        strcat(printString, " ");
      }
    }
  }
  else
  {
    printf("請輸入4位整數");
  }

  if(strlen(printString)) {
    printf("請輸入4位整數 轉文字 > %s", printString);
  }
}

// 主函數，入口函數
int main(void)
{
  /**
   * 函數練習
   */
  int acc = 18769;
  displayIntToChar(acc);
  return 0;
}
