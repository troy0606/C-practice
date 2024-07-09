#include <stdio.h>

/**
 * 測驗 
 * 選擇題
 * 
 * 用於對前面章節的複習
 */

/**
 * 1. 設 x,y,z 都是整數變數，x,y 的初始值都是 5，
 * 執行 z = (++x) + (y--) + 1 後
 * x,y,z 三個變數的值按順序是 (D)
 *
 * A: 5,5,11 B: 6,6,13
 * C: 4,6,12 D: 6,4,12
 *
 * ps: ++ -- 變數，先運算再 return
 * ps: 變數 ++ --，先return再 運算
 * ps: 內容請參考 Class9-increment-operators
 */
void question1()
{
  int x, y, z = 5;
  z = (++x) + (y--) + 1;
  printf("x = %d,y = %d,z = %d", x, y, z);
}

/**
 * 2. 下列字符中不屬於轉義字符的是 (D)
 * ps: 內容請參考 Class2-constant
 *
 * A: \n B: \t
 * C: \b D: \k
 */
void question2()
{
  printf("/\n 換行符 %c \n", "\n");
  printf("/\t 水平制表符 %c \n", "\t");
  printf("/\b 退格符 %c \n", "\b");
  // unknown escape sequence: '\k'gcc
  printf("/\k %c \n", "\k");
}

/**
 * 3. 下列不正確的標示符的是 (B)
 *
 * A: _char B: a?b
 * C: x D: st2_flag
 */
void question3()
{
  int _char;
  // expected '=', ',', ';', 'asm' or '__attribute__' before '?' tokengcc
  int a ? b;
  int x;
  int st2_flag;
}

/**
 * 4. 一個C語言程序 (C) 主函數
 *
 * A: 可以沒有 B: 可以有多個
 * C: 有且只有一個 D: 若有，只有一個
 *
 * ps: 內容請參考 Class1-main
 */
void question4()
{
  int main()
  {
    return 0;
  };

  main();
}

/**
 * 5. 一個C語言程序是由 (B)
 *
 * A: 一個主程序跟若干子程序組成 B: 函數組成
 * C: 若干過程組成 D: 若干子程序組成
 *
 * ps: 函數是C語言最基本單元
 */
void question5()
{
}

/**
 * 6. 在記憶體中應該開闢 (A) 多少個字節來存放字符 '\n'
 *
 * A: 1 B: 2
 * C: 3 D: 4
 *
 */

void question6()
{
}

/**
 * 7. 下面的 (C) 不是合法的 C 語言常量
 *
 * A: 123 B: 'M'
 * C: 0892 D: "Flag"
 *
 * ps: 整數前面不能帶 0
 * ps: 內容請參考 Class7-printf
 */

void question7()
{
  int A = 123;
  char B = 'M';
  // invalid digit "9" in octal constantgcc
  int C = 0892;
  char D[5] = "Flag";
}

/**
 * 8. 下面 (A) 對變量說明是錯誤的
 *
 * A: char c1,int x; B: int a,b;float x,y;
 * C: int a; int b; D: char c1; int x;
 *
 * ps: 內容請參考 Class7-printf
 */

void question8()
{
  // 必須是識別項C/C++(40)
  char c1, int x;
  int a, b;float e, f;
  int c;int d;
  char c1;int z;
}

// 主函數，入口函數
int main(void)
{
  question1();
  question2();
  question3();
  question4();
  question5();
  question6();
  question7();
  question8();
  return 0;
}