#include <stdio.h>

int main(void)
{
  int a = 5;
  /**
   * 遞增、遞減運算子
   * a++ == ?
   * a++ <==> a = a + 1;
   * a-- <==> a = a - 1;
   * ++a <==> a = a + 1;
  */

  // 先後 ++ 有甚麼不同
  // ++a 先自加 再參與運算
  // a++ 先參與運算 再自加

  // ex:
  int b = 7;
  int b2 = 7;

  int c = 1 + b++;
  int c2 = 1 + ++b2;

  printf("int c=%d 是 1 + b++，b==%d\n",c,b);
  printf("int c2=%d 是 1 + ++b2，b2==%d\n",c2,b2);

  int d = 5;
  int d2 = 5;
  int e = d--;
  int f = --d2;

  printf("int e=%d 是 d--，d==%d\n",e,d);
  printf("int f=%d 是 --d2，d2==%d\n",f,d2);

  /**
   * 遞增遞減運算子只能用在整數變量及字符型變量
   * 不能用於常量或運算表達式
   * 
   * ex: 5++  answer 沒有變量可以賦值
   * ex: (a+b)++ answer a+b是一個值不是變量，無法賦值
  */
  return 0;
}
