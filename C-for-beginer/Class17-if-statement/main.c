#include <stdio.h>

int main(void)
{

  /**
   * if 語句
   * 
   * 提供一個分支，一個if語句，是一條完整的語句
   * 
   * 一般形式
   * if(表達式) {
   *   語句塊
   * }
   * 後續語句...
   * 
   * 如果表達式為真，則執行語句塊，否則跳過語句塊
   * 執行後續語句
   * 
   * if 語句
   * 表達式條件為真實只會執行後面第一個語句
   * 所以如果要執行多個語句，需要用到語句塊(複合語句)
   * 
   * ex: 
   * if(表達式) 
   *  語句1  (執行)
   *  語句2  (不執行)
   * 
   * ex: 
   * if(表達式) {
   *  語句塊  (執行)
   * }
   */

  int a = 110;
  if(a < 100)
    printf("a 小於 100\n");
  printf("a 大於 100\n");

  int b = 110;
  if(b < 100) {
    printf("b 小於 100\n");
    printf("b 大於 100\n");
  }

  // 練習

  char temp = 0;

  // 比較的是 ASCII 碼
  // ex: int 48 在 char 類型是比對 ASCII 代表 '0'
  printf("ASCII 48 代表 %c\n", 48);
  // ex: int 97 在 char 類型是比對 ASCII 代表 'a'
  printf("ASCII 97 代表 %c\n", 97);
  // 參考: https://shihyu.github.io/books/apas01.html

  printf("請輸入一個字\n");

  // 就算輸入多個字最後也只會抓第一個字，因為是宣告成 char 類型
  // 多的資料不會被存進變數
  scanf("%c", &temp);

  if(temp >= '0' && temp <= '9') {
    printf("這是一個數字\n");
  }

  if(temp >= 'A' && temp <= 'Z') {
    printf("是一個大寫字母\n");
  }

  if(temp >= 'a' && temp <= 'z') {
    printf("是一個小寫字母\n");
  }

  return 0;
}
