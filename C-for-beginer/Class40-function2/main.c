#include <stdio.h>
#include <string.h>

// 1. 不能嵌套定義
  int sum(int A, int B)
  {
    if (A <= 0)
    {
      if (B <= 0)
      {
        return 0;
      }
      return B;
    }
    if (B <= 0)
    {
      if (A <= 0)
      {
        return 0;
      }
      return A;
    }
    int C = A + B;
    A = A - 1;
    B = B - 1;
    // 3. 允許遞歸調用
    return C + sum(A, B);
  };
/**
 * 函數定義練習
 *
 * 1. 無返回值，參數為兩個 int 一個 float
 * 2. 返回值為 char，參數為 double
 * 3. 返回值為 float，參數為兩個 float
 * 4. 返回值為 int，無參數
 */

// 1. 無返回值，參數為兩個 int 一個 float
void functionPr1(int A, int B, float C)
{
  printf("functionPr1 int A = %d, int B = %d, float C = %f\n", A, B, C);
}

// 2. 返回值為 char，參數為 double
char functionPr2(double A)
{
  printf("functionPr2 double A = %lf\n", A);
  return (char)A;
}

// 3. 返回值為 float，參數為兩個 float
float functionPr3(float A, float B)
{
  printf("functionPr3 float A = %f, float B = %f\n", A, B);
  return A + B;
}

// 4. 返回值為 int，無參數
int functionPr4(void)
{
  printf("functionPr4 parameter void, return int 0\n");
  return 0;
}


// 主函數，入口函數
int main(void)
{
  /**
   * 函數說明
   *
   * 1. 不能嵌套定義
   * 2. 允許嵌套調用 (在一個函數調用另一個函數)
   * 3. 允許遞歸調用 (在函數中調用自己本身)
   * 4. C 語言中，每個程式應該只有一個 main 函數，系統負責調用 main 函數，
   * 並從 main 函數開始執行
   * 5. main 函數可以調用其他函數，其他函數也可以調用 main 函數，但不應該這麼做
   *
   *
   * 函數定義格式
   *
   * 1. 有返回值/有參數 函數
   *    返回值類型說明(默認 int) 函數名(參數1類型 參數1, 參數2類型 參數2, ...)
   *
   * 2. 無返回值/有參數 函數
   *    void 函數名(參數列表)
   *
   * 3. 有返回值/無參數 函數
   *    返回值類型說明(默認 int) 函數名(可寫或不寫 void)
   */

  int intA = 12345;

  // 函數定義 有返回值 有參數
  // 2. 允許嵌套調用
  int sumVal = sum(5, 3);
  printf("sum 5 + 3 = %d\n", sumVal);

  functionPr1(1,2,1.557);
  functionPr2(1.5687774);
  functionPr3(1.557, 1.84351);
  functionPr4();

  return 0;
}
