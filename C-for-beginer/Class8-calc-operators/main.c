#include <stdio.h>

int main(void)
{
  /**
   * 算數運算子
   * +  加 
   * -  減
   * *  乘
   * /  除
   * %  餘
   * 
   * 運算順序由左至右
   * 一般運算表達式依照先乘除(餘)後加減
   * 有需要優先計算的可使用 ( ) 包起來
  */
  int x = 9;
  int y = x - 1;

  printf("int y=%d\n",y);

  int n = 5;
  int k = 3;
  int m = n % k;

  printf("int m=%d\n",m);

  int b = 8;
  float fb = 8;
  int a = 6;
  int q = 4;
  float fq = 4;

  int p = (b - a) / q;

  float fp = (b - a) / q;
  float fp1 = (b - a) / fq;
  float fp2 = (fb - a) / q;


  printf("int p=%d\n",p);
  
  // 浮點數運算內容計算變量都不是浮點數的話，計算不出浮點數
  printf("float fp=%f\n", fp);
  // 浮點數運算內容只要有一個計算變量是 浮點數就可以計算出浮點數
  printf("float fp1=%f\n",fp1);
  printf("float fp2=%f\n",fp2);

  return 0;
}
