#include <stdio.h>

// 用戶自定義函數
// 無參數
// 無返回值
void printTriangle(void) {
  for(int i = 0; i < 10; i++) {
    for(int j = 0; j < 10 - i; j++) {
      putchar('*');
    }
    putchar('\n');
  }
}

// 用戶自定義函數
// 有參數
// 有返回值
int sum(int A, int B) {
  int C = A+B;
  return C;
}

// 主函數，入口函數
// 編譯後執行程式自動呼叫
int main(void)
{
  /**
   * 函數介紹
   * 基本概念
   * 
   * 1. 把一些較大或功能相同的程序分成一個個程序塊
   * 2. 函數是構成程序的基本單位
   * 3. 函數使用可以降低程式碼重複寫
   * 4. 函數可以讓程序更加模組化，提升可讀性
   * 
   * 函數分類
   * 根據函數定義方式可分為
   * 1. 庫函數 (printf 來自 stdio.h，strcat 來自 string.h)
   * 2. 用戶自定義
   * 
   * 根據是否有參數可以分為
   * 1. 有參函數
   * 2. 無參函數
   * 
   * 根據是否有返回值
   * 1. 有返回值函數
   * 2. 無返回值函數
   */

  for(int i = 0; i < 3; i++) {
    printTriangle();
  }

  // stdio 庫函數
  char testGetChar = getchar();
  putchar(testGetChar);

  // 類型 "void" 的值無法用來初始化類型 "int" 的實體 
  // int printTriangleVal = printTriangle();

  // 有返回值
  int sumVal = sum(5,6);
  printf("sum 5 + 6 = %d\n", sumVal);

  return 0;
}
