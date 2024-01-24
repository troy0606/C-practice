#include <stdio.h>

int main(void)
{

  /**
   * 逗號運算子
   * ,
   * 它計算其第一個運算元並丟棄結果，然後計算第二個運算元並返回。這些計算之間有一個順序點
   * 具有最低的優先級
   * 
   * ex: 
   * 變數賦值
   * int i = (a, b); 
   * ps: 優先級低於賦值運算子
   * 
   * for 迴圈條件初始
   * for (first = s, s += len; s >= first; --s)
   * 
   * if 判斷
   * if (y = f(x), y > x) 與下面的表達方式相等，ps: 本人目前看前端js很少找到這樣寫
   * y = f(x);
   * if (y > x )
   * 
  */
  int a = (4,5);

  printf("整數 a 是 %d\n", a);

  return 0;
}
