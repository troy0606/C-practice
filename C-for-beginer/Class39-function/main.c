#include <stdio.h>

void printTriangle(void) {
  for(int i = 0; i < 10; i++) {
    for(int j = 0; j < 10 - i; j++) {
      putchar('*');
    }
    putchar('\n');
  }
}

// 主函數，入口函數
int main(void)
{

  /**
   * 函數介紹
   */

  for(int i = 0; i < 3; i++) {
    printTriangle();
  }
  return 0;
}
