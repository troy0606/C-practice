#include <stdio.h>

/**
 * static 關鍵字
 *
 * 1. 靜態變數具有即使在超出其範圍后仍保留其值的特性！
 * 2. 因此，靜態變數在其先前的作用域中保留其先前的值，並且不會在新作用域中再次初始化。
 */

/**
 * 證明靜態變數保留值
 */
int testStaticVariableFn()
{
  static int num = 0;
  return ++num;
}

/**
 * 一般函式內的變數只會在呼叫後分配在 stack
 * 執行完後就會釋放
 * 所以不會存值
 */
int testNormalVariableFn()
{
  int num = 0;
  return ++num;
}

// 主函數，入口函數
int main(void)
{
  // 證明靜態變數保留值
  // static variable num = 1
  printf("static variable num = %d in testStaticVariableFn call once\n", testStaticVariableFn());
  // static variable num = 2
  printf("static variable num = %d in testStaticVariableFn call twice\n", testStaticVariableFn());

  // 證明一般區域變數不保留值
  // normal variable num = 1
  printf("static variable num = %d in testNormalVariableFn call once\n", testNormalVariableFn());
  // normal variable num = 1
  printf("static variable num = %d in testNormalVariableFn call twice\n", testNormalVariableFn());
  return 0;
}