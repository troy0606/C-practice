#include <stdio.h>

int main(void)
{

  /**
   * 邏輯運算子
   * && 與
   * || 或
   * !  非 (優先級 大於 算數運算子 和 邏輯運算子 && 和 ||)
   * 
   * true && true = true
   * false && true = false
   * false && false = false
   * true && false = false
   * 
   * true || true = true;
   * true || false = true;
   * false || true = true;
   * false || false = false;
   * 
   * !true = false
   * !false = true
   * 
   * [短路求值]:
   * 當今天是 false && (true || false)
   * 程式只會運算 && 前面 false 的部分
   * 因為第一個 false 後面的 && 不管是 true 或 false 結果都會是 false
   * 
   * 當今天是 true || (true || false)
   * 程式只會運算 || 前面 true 的部分
   * 因為第一個 true 後面的 || 不管是 true 或 false 結果都會是 true
   * 
  */
  int a = 5;
  int b = 4;
  int c = 6;
  int d = 0;

  // 真值(true) 為 1
  // 假值(false) 為 0
  printf("整數 a(5) > b(4) && c(6) > b(4) 是 %d\n", a > b && c > b);
  printf("整數 a(5) < b(4) && c(6) > b(4) 是 %d\n", a < b && c > b);
  printf("整數 a(5) == b(4) && c(6) > b(4) 是 %d\n", a == b && c < b);

  printf("整數 a(5) > b(4) || c(6) > b(4) 是 %d\n", a > b || c > b);
  printf("整數 a(5) < b(4) || c(6) > b(4) 是 %d\n", a < b || c > b);
  printf("整數 a(5) == b(4) || c(6) > b(4) 是 %d\n", a == b || c > b);

  // !5 => false
  printf("整數 !a(5) 是 %d\n", !a);
  // !0 => true
  printf("整數 !d(0) 是 %d\n",!d);

  return 0;
}
