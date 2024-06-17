#include <stdio.h>
#include <string.h>

/**
 * 設計1個 min 函數
 * 接收2個 double 參數
 * 返回比較小的 double
 */
double min(double A, double B)
{
  return A < B? A : B;
}

// fib number
int fib(int N)
{
  if(N == 1) return 1;
  if(N == 2) return 1;

  return fib(N - 1) + fib(N - 2);
}

// 主函數，入口函數
int main(void)
{
  /**
   * 函數練習2
   */

  double numA = 1.57344;
  double numB = 0.48832;
  double resultA = min(numA, numB);
  if(resultA == 0.48832) {
    printf("min 函數測試通過 resultA == %.5f\n", resultA);
  }

  return 0;
}
