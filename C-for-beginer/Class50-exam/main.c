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

/**
 * 9. 有變量說明 int a = 3; 則表達式 a < 1 && --a > 1
 * 的 運算結果 和 a 的值應該是(B)
 *
 * A: 0 和 2; B: 0 和 3;
 * C: 1 和 2; D: 1 和 3;
 *
 * ps: 運算完 a < 1 = false 之後 
 * && 運算會看 運算子前面是 false 就不會執行後面了
 * 所以 運算結果是 0 (false)
 * a 是 3
 */
void question9()
{
  int a = 3;
  int result = a < 1 && --a > 1;
  printf("第九題答案: a = %d, result = %d\n", a, result);
}

/**
 * 10. 設 int a = 12; 則執行完語句 a += a = a * a  後
 * a 的值是 (C)
 *
 * A: 552; B: 264;
 * C: -264; D: 144;
 *
 * ps: 賦值運算是從右往左，
 * 1. a * a = 144
 * 2. a -= 144 => a -= 144 => a = 12 - 144 => a === -132
 * 3. a += -132 => a = -132 + -132 => a === -264
 */
void question10()
{
  int a = 12;
  a += a = a * a;
  printf("第10題答案: a = %d, \n", a);
}

/**
 * 11. C 語言中，運算對象必須是整形數的運算符是(A)
 *
 * A: %; B: /;
 * C: % 和 \; D: % 和 /;
 *
 */
void question11()
{
  float a = 15.5;
  // 運算式必須有整數類資料類型C/C++(31)
  int resultA = a % 3;
  int resultB = a / 3;
}

/**
 * 12. 設變量 a 是整型，f 是實型，i 是雙精度型，
 * 則表達是  10 + a + i * f 值的資料類型為(C)
 *
 * A: int; B: float;
 * C: double \; D: 不確定;
 *
 * ps: 實型變數分為單精度(float)，雙精度(double)和長雙精度(long double)型
 * ps: 不同資料類型作運算，會觸發強制轉型，低經度往高精度轉換後做運算
 * ps: 可參考 Class15-type-change
 */
void question12()
{
  int a = 12;
  float f = 15.5;
  double i = 15.5561;
  int resultA = 10 + a + i * f;
}

/**
 * 13. 有如下程序，輸入資料 12345678 <cR>後(CR 表示 enter 鍵)，
 * x 的值是 (B)
 *
 * A: 12345; B: 123;
 * C: 45 ; D: 345;
 *
 * ps: 
 */
void question13()
{
  int x;
  float y;
  // 這個寫法只會取輸入的前三位數字
  scanf("%3%d%f, &x", &y);
}

/**
 * 14. 若有以下定義 int a,b;float x，則正確的賦值語句是(A/C)
 *
 * A: a=1,b=2; B: b++;
 * C: a=b=5 ; D: b=int(x);
 *
 * ps: 
 */
void question14()
{
  int a,b;float x;
  a=1,b=2;
  b++;
  a=b=5;
  // 必須是運算式C/C++(29)
  b=int(x);
}

/**
 * 15. 以下程序的執行結果是(A)
 *
 * int i = 10,j = 10;
 * printf("%d,%d\n", ++i,j--)
 * 
 * A: 11,10 B: 9,10
 * C: 11,9 D: 10,9
 *
 * ps: ++i 會先把 i 自增才做運算
 * j-- 會先把 j 運算 才做自減
 */
void question15()
{
  int i = 10,j = 10;
  // 第 15 題 i = 11, j = 10
 printf("第 15 題 i = %d, j = %d\n", ++i,j--);
}

/**
 * 16. 已知字母 A 的 ASCII 碼是 65，
 * 以下程序執行結果是 (D)
 *
 * char c1 = 'A',c2 = 'Y';
 * printf("%d,%d\n", c1,c2)
 * 
 * A: A,Y B: 65,65
 * C: 65,90 D: 65,89
 *
 * ps: %d 代表 decimal (十進位)，意思是告訴電腦：要把後面這個變數以十進位的方式印出來， 
 * 讀取變數時是讀取 記憶體位置，
 * 記憶體空間裡面是存 2 進至 的數值，
 * char 對應的字符是用 ASCII 標準對應的，
 * 'A' 在ASCII 裡面對應的 65
 * 接下來的數值分別對應大寫的小寫的英文...
 * source: https://www.geeksforgeeks.org/what-is-ascii-a-complete-guide-to-generating-ascii-code/?ref=lbp
 * 
 * int 表示存了 4 個 bytes => 32 bit，
 * char 表示 1 個 byte => 8 bit，
 * 思考: 所以 int 轉 char 應該只能讀到 255，char 因為只占 8 bit.
 */
void question16()
{
  char c1 = 'A',c2 = 'Y';
  // 第 16 題 c1 = 65, c2 = 89
 printf("第 16 題 c1 = %d, c2 = %d\n", c1,c2);
}

/**
 * 17. 設 x,y,z 是 int 型變量，且 x = 3,y=4,z=5，
 * 則下面表達式中值為 0 的是 (A)
 * 
 * A: x&&y B: x<=y
 * C: x||y+z&&y-z  D: !((x<y)&&!z||1)
 *
 * ps: 
 * A : x&&y > 1
 * B : x<=y > true > 1
 * C : x||y+z&&y-z > 3||9&&-1 > 1&&-1 > 1
 * D : !((x<y)&&!z||1) > !((1)&&!z||1) > !((1)&&0||1) > !(0||1) > !1 > 0
 * 
 * ps: 可參考 Class14-operators-priority
 */
void question17()
{
  int x = 3;
  int y = 4;
  int z = 5;
 printf("第 17 題 x&&y = %d\n", x&&y);
 printf("第 17 題 x<=y = %d\n", x<=y);
 printf("第 17 題 x||y+z&&y-z = %d\n", x||y+z&&y-z);
 printf("第 17 題 !((x<y)&&!z||1) = %d\n", !((x<y)&&!z||1));
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
  question9();
  question10();
  question11();
  question13();
  question14();
  question15();
  question16();
  question17();
  return 0;
}