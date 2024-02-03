#include <stdio.h>

int main(void)
{

  /**
   * switch case 語句
   *
   * ex:
   * switch (表達式 - ps: 必須能以整數，枚舉，字符 表示)
   * {
   *  case 常量表達式 1:
   *    語句1;
   *    break; [ps: 有的話執行完語句1後就會跳出switch語句，沒有的話會繼續比對其他表達式]
   *  case 常量表達式 2: [ps: case 不能有重複的否則會報語法錯誤]
   *    語句2;
   *    break;
   *  ......
   *  default: [ps: 上述表達式都沒有執行到 break 的話，就會執行 default 語句]
   *  語句 n
   * }
   *
   */

  // 練習: 輸入兩個數字，再輸入 +-*/ 運算子，顯示計算結果

  int aInt, bInt;
  char calcOpt;

  printf("請輸入兩個數字，再輸入 +-*/ 運算子\n");
  printf("請輸入第一個數字 再 enter\n");
  scanf("%d\0\n", &aInt);
  printf("請輸入第二個數字 再 enter\n");
  scanf("\n%d\0\n", &bInt);

  printf("請輸入 +-*/ 運算子 再 enter\n");
  scanf("\n%c\0\n", &calcOpt);

  switch (calcOpt)
  {
  case '+':
  ;
    int result = aInt + bInt;
    printf("aInt: %d + bInt: %d = %d\n", aInt, bInt, result);
  
  break;
  case '-':
  {
    int result = aInt - bInt;
    printf("aInt: %d - bInt: %d = %d\n", aInt, bInt, result);
    break;
  };
  case '*':
  {
    int result = aInt * bInt;
    printf("aInt: %d * bInt: %d = %d\n", aInt, bInt, result);
  };
  break;
  case '/':
  {
    int result = aInt / bInt;
    printf("aInt: %d / bInt: %d = %d\n", aInt, bInt, result);
  };
  break;
  default:
    printf("輸入錯誤\n");
    break;
  }

  /** ps: 
   * 上面的 case 裡面的程式，如果沒有用 {} 包起來
   * 編譯時會報錯 Label can only be used as part of a statement Error
   * 原因是因為 case : 只能在語句前
   * 而 case : 後第一行 是宣告 result 
   * 宣告不算語句，所以會報錯
   * 
   * 可以像上面程式 + 的 case 這樣寫，但不推薦
   * 
   * 參考: https://stackoverflow.com/questions/46341364/label-can-only-be-used-as-part-of-a-statement-error#46341408
  */

  return 0;
}
