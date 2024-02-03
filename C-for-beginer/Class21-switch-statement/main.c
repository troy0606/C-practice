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
  {
    int result = aInt + bInt;
    printf("aInt: %d + bInt: %d = %d\n", aInt, bInt, result);
  };
  break;
  case '-':
  {
    int result = aInt - bInt;
    printf("aInt: %d - bInt: %d = %d\n", aInt, bInt, result);
  };
  break;
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

  return 0;
}
