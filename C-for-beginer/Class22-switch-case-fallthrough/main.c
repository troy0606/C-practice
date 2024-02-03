#include <stdio.h>

int main(void)
{

  /**
   * switch case 語句 fallthrough
   *
   * ex:
   * switch (表達式 - ps: 必須能以整數，枚舉，字符 表示)
   * {
   *  case 常量表達式 1:
   *    語句1; [ps: 因為沒有 break 所以會繼續執行下面的語句]
   *  case 常量表達式 2:
   *    語句2;
   *    break;
   *  ......
   *  default: [ps: 上述表達式都沒有執行到 break 的話，就會執行 default 語句]
   *  語句 n
   * }
   *
   */

  // 練習: 輸入分數，根據輸入的分數，顯示對應的成績分級

  int aInt;

  printf("請輸入分數 再 enter\n");
  scanf("%d\0\n", &aInt);

  switch (aInt / 10)
  {
  case 10:
  case 9:
  {
    printf("成績: %d ，分級A\n", aInt);
    break;
  };
  case 8:
  {
    printf("成績: %d ，分級B\n", aInt);
    break;
  };
  case 7:
  {
    printf("成績: %d ，分級C\n", aInt);
    break;
  };
  case 6:
  {
    printf("成績: %d ，分級D\n", aInt);
    break;
  };
  default:
    printf("成績: %d ，分級E，不及格\n", aInt);
    break;
  }

  /** ps:
   * 有時可以利用 switch 表達式的運算結果，來判斷一個區間的 case
   * 
   * 當 case 沒有 break 的時候會繼續判斷下去，直到遇到 break 或者 default 為止
   */

  return 0;
}
