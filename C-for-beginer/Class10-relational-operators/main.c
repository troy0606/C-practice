#include <stdio.h>

int main(void)
{

  /**
   * 關係運算子
   * 其實就是比較左右的運算
   * >  大於
   * <  小於
   * <= 小於等於
   * >= 大於等於
   * == 等於
   * != 不等於
   * 
   * 
   * 注意: 
   * 1. 運算子中間不能有空格 錯誤ex: < = / ! =
   * 2. 運算子順序不能顛倒 錯誤ex: =< / =! 
  */
  int a = 5;
  int b = 4;

  // 真值(true) 為 1
  printf("整數 a(5) > b(4) 是 %d\n", a > b);
  // 假值(false) 為 0
  printf("整數 a(5) < b(4) 是 %d\n", a < b);
  printf("整數 a(5) != b(4) 是 %d\n", a != b);

  float fa = 1.456;
  float fb = 1.456;

  // 小數部分比大小不能直接比，網路上有說可以用一定精確度內的誤差值來比較
  // 實作部分要再找資料
  const float EPSINON=0.000001;

  printf("浮點數 fa(1.456) == fb(1.456) 是 %d\n", fabs(fa - fb) <= EPSINON);


  return 0;
}
