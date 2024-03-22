#include <stdio.h>
#include <string.h>

/**
 * 找出 int num1, int num2, int num3
 * 三個整數在 1000 以內的最小公倍數
 */
int myFunc(int num1, int num2, int num3)
{
  // if(0) {
  //   return 1;
  // }

  for(int i = 1; i <= 1000; i++) {
    if(i % num1 == 0 && i % num2 == 0 && i % num3 == 0) {
      return i;

      /**
       * 如果是寫在函數中，且接下來的程式不需要執行
       * 可以用 return 代替 break
       */ 
      // break;
    }
  }

  /**
   *  需要回傳如果沒有執行上面 return 的預設值
   *  避免 如果上面沒有執行 return，最後 function 沒有return 值
   *  與函數定義不符
   */ 
  return -1;
}

// 主函數，入口函數
/**
 * 入口函數與操作系統約定，返回0表示正常執行
 * 詳細內容參考
 * https://stackoverflow.com/questions/204476/what-should-main-return-in-c-and-c
*/
int main(void)
{
  /**
   * 函數回傳值
   * 
   * 變數 return a;
   * 常數 return "CCC";
   * 表達式 return a * b;
   * 計算語句 return (a > b ? a : b);
   */
  int myNum = myFunc(1,3,5);
  
  // main 函數會預設回傳 0，所以不寫也不會報錯
  // return 0;
}
