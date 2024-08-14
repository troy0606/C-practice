#include <stdio.h>
#include <stdbool.h>

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

/**
 * 18. 判斷 char 型變量 c1 是否微小寫字母的正確表達式為 (D)
 * 
 * A: 'a' <= c1 <= f'z' B: (c1 >= a) && (c1 <= z)
 * C: ('a' >= c1)('z' <= c1)  D: (c1 >= 'a') && (c1 <= 'z')
 *
 * ps: 
 * A : 沒有這樣寫法 f'z'
 * B : a 如果不是變數要用 'a' 當字符
 * C : 兩個括號放在一起，沒有這種寫法
 * D : 正解，字元比大小會用 ASCII 碼來做比較
 * 
 */
void question18()
{
  char c1;
  // 識別項 "f" 未定義
  // bool isLowerCase = 'a' <= c1 <= f'z';

  // 識別項 "a" 未定義
  // 識別項 "z" 未定義
  // bool isLowerCase = (c1 >= a) && (c1 <= z);

  // 程式呼叫的運算式前括號必須有函式 (指標) 類型
  // bool isLowerCase = ('a' >= c1)('z' <= c1);

  // 字元比大小會用 ASCII 碼來做比較;
  bool isLowerCase = (c1 >= 'a') && (c1 <= 'z');
}

/**
 * 19. 字符 'a' 在記憶體中佔據的位元組個數為 (B)
 * 
 * A: 0 B: 1
 * C: 2 D: 3
 *
 * 
 * ps: 可參考 Class0-data-type
 */
void question19()
{
  printf("型態\t\t大小（bytes）\n");
  printf("note: 1 bytes = 8 bit\n");

  printf("字元--------\n");
  printf("char\t\t%lu\n", sizeof(char));
}

/**
 * 20. 下面關於 for 循環的正確描述是 (D)
 * 
 * A: for 循環只能用於循環次數已經確定的情況 
 * B: for 訓還事先執行循環體語句，後判斷表達式
 * C: 在 for 循環體中，不能用 break 語句跳出循環體 
 * D: for 循環體語句中，可以包含多條語句，但藥用花括號括起來
 * 
 * A: 可以用在循環次數不定的
 * B: 只有 do while 是這樣
 * C: break 跳出可以用在各種循環語句
 * D: 正解
 *
 * ps: 可參考 Class24-for-loop
 */
void question20()
{
}

/**
 * 21. 下面關於 for 循環的正確描述是 (C)
 * 
 * A: 1  B: 1 2
 * C: 1 2 3 D: 1 2 3 4 
 *
 * ps: 可參考 Class23-while-loop
 */
void question21()
{
  int num = 0;
  while(num <= 2) {
    num ++;
    printf("第 21 提循環 num = %d", num);
  }
}

/**
 * 22. 以下描述正確的是 (C)
 * 
 * A: 由於 do-while 循環中循環體語句只能是一條可執行語句，
 * 所以循環體內不能使用複合語句  
 * B: do-while 循環由 do 開始，用 while 結束，
 * 在 while (表達式)後面不能寫分號
 * C: 在 do-while 循環體中，一定要有能使 while 後面表達式的值變成零("假")的操作，
 * 否則會造成死循環 
 * D: 在 do-while 循環中，根據情況可以省略 while
 *
 * A: 可以使用複合語句
 * B: 在 while (表達式)後面一定要寫分號
 * C: 正解
 * D: 沒有
 * ps: 可參考 Class25-do-while-loop
 */
void question22()
{
}

/**
 * 23. 以下對一維整形陣列 a 的正確說明是 (D)
 * 
 * A: int a(10)
 * B: int n = 10,a[n];
 * C: int n; scanf("%d", &n);int a[n];
 * D: int a[10]
 *
 * A: 不能用小括號
 * B: 不能用變數初始化陣列，可以用常量
 * C: 同B
 * D: 正解
 * ps: 可參考 Class29-array
 */
void question23()
{
  // 必須是類型規範
  // int a(10);

  // 陣列的長度要在編譯期就決定好。如果想要在執行期動態生成陣列，要用動態配置記憶體的方式
  // int n = 10,a[n];

  // 同上
  // int n; scanf("%d", &n);int a[n];

  // 正解
  int a[10];
}

/**
 * 24. 以下對二維陣列 a 正確的說明是 (C)
 * 
 * A: int a[3][];
 * B: float a(3,4);
 * C: double a[1][4];
 * D: float a(3)(4);
 *
 * A: 後面個數不能省略
 * B: 沒有這樣的寫法
 * C: 正解
 * D: 沒有這樣的寫法
 * ps: 可參考 Class31-two-dimension-array
 */
void question24()
{
  // 不允許不完整的類型
  // int a[3][];

  // 沒有這樣的寫法
  // float a(3,4);

  // 正解
  double a[1][4];

  // 沒有這樣的寫法
  // float a(3)(4);
}

/**
 * 25. 若二維陣列 a 有 m 列，則在 a[i][j] 前面的個數為 (B)
 * 
 * A: j*m+i
 * B: i*m+j
 * C: i*m+j-1
 * D: i*m+j+1
 *
 * ps: 可參考 Class31-two-dimension-array
 */
void question25()
{
  int a[2][3] = {1,2,3,4,5,6};
  int answer = a[1][2];
  // answer = 6;
  // m 列 = 3 列，a[1][2] = 3+3 = 6 前面的個數是 5
  /**
   * [
   *  [1,2,3],
   *  [4,5,6],
   * ]
   */
}

/**
 * 26. 已知有整數型陣列 int arr_nNum[10] 和 
 * 字符陣列 char szName[10]，訪問陣列的正確方式的是(C)
 * 
 * A: arr_nNum[10] = 10;
 * B: arr_nNum = {1,2,3,4};
 * C: szName[1] = 5;
 * D: szName = 5;
 *
 * ps: 可參考 Class29-array
 */
void question26()
{
  int arr_nNum[10];
  char szName[10];
  
  // 越界訪問，只能初始化 10 個空間，訪問到第 11 個(index 10)
  // arr_nNum[10] = 10;
  
  // 花括號只有初始化可以使用
  // arr_nNum = {1,2,3,4};

  // 雖然宣告是 char，但還是可以塞整數
  // szName[1] = 5;

  // szName 是地址，地址無法存放數據
  // 運算式必須是可修改的左值
  // szName = 5;
}

/**
 * 27. 下面說法錯誤的是(D)
 * 
 * A: int 和 int 相加，得到的結果仍然是 int
 * B: char 和 int 相加，得到的結果是 int
 * C: double 和 float 相加，得到的結果是 double
 * D: int 被強轉成 char 後，將變成 char
 *
 * ps: 隱式轉換，精度不同數據類型運算時，低精度會轉成高精度
 * ps: 強轉並不會影響原本變數的數據類型，只是暫時先改用其他數據類型
 * ps: 可參考 Class15-type-change
 */
void question27()
{
  int a,b = 1;
  printf("27題 int 和 int 相加 = %d\n", a + b);

  char d = 'a';
  printf("27題 char 和 int 相加 = %d\n", a + d);

  // 雙精度浮點數
  double c1 = 0.5;
  // 單精度浮點數
  float c2 = 0.6;
  printf("27題 double 和 float 相加 = %lf\n", c1 + c2);
}

/**
 * 28. 已知 const int a = 9，則下面語句正確的是 (D)
 * 
 * A: a = 10;
 * B: a ++;
 * C: -- a;
 * D: int b = a + 1;
 *
 * ps: 常量不可重新賦值(只讀)
 * ps: 可參考 Class48-const
 * ps: 遞增、遞減運算子會重新賦值
 * ps: 可參考 Class9-increment-operators
 */
void question28()
{
  const int a = 9;
  // 運算式必須是可修改的左值
  a = 10;
  // 運算式必須是可修改的左值
  // ps: a++ => a = a + 1;
  a ++;
  // 運算式必須是可修改的左值
  // ps: --a => a = a - 1;
  -- a;
  int b = a + 1;
}

/**
 * 29. 已知 int a = 9 + '1'，則下面說法錯誤的是 (B、D)
 * 
 * A: %d 打印 a 的值是 58;
 * B: %c 打印 a 的值是 '10';
 * C: sizeof(a) 等於 4;
 * D: 不能用 %c 打印 a;
 *
 */
void question29()
{
  int a = 9 + '1';
  // ps: 選項 A 正確，因為 運算時 '1' 會被當作 int，對應 ASCII 是 49，9 + 49 = 58
  printf("第 29 題選項 A 打印 a 的值是 58，實際 %d\n", a);
  // ps: 選項 B 不正確，因為同 上面描述
  printf("第 29 題選項 B 打印 a 的值是 '10'，實際 %c\n", a);
  // ps: 選項 C 正確，因為 int 占的空間是 4 bytes
  printf("第 29 題選項 C sizeof(a) 等於 4，實際 %d\n", sizeof(a));
  // ps: 選項 D 不正確，還是可以用 %c 打印
  printf("第 29 題選項 D 不能用 打印 a，實際 %c\n", a);
}

/**
 * 30. 下列運算符中優先級最高的是 (C)
 * 
 * A: <  B: +
 * C: %  D: !=
 *
 * ps: 可參考 Class14-operators-priority
 */
void question30()
{
  /**
   * 運算子優先順序(由高到低)
   * 
   * 特殊運算子 () !  
   * 算術運算子 *、/、% 
   * 關係運算子 >=<
   * 位元運算子 
   * 邏輯運算子 && ||  
   * 條件運算子 ?:
   * 賦值運算子 =
   * 逗號運算子 ,
  */
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
  question18();
  question19();
  question20();
  question21();
  question22();
  question23();
  question24();
  question25();
  question26();
  question27();
  question28();
  question29();
  question30();
  return 0;
}