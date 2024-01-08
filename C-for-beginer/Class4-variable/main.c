#include <stdio.h>

int main(void)
{
  // 定義整數型的變量
  int nSum;
  // 定義 short 類型的變量
  short nNumber;
  // 定義 float 類型的變量
  float fArea;
  // 定義 char 類型的變量'
  char chTemp;

  // 變量初始化原因
  /**
   * 給定一個有意義的初始值
   * 清理內存中的垃圾(上一個使用內存的資料清理)
   **/

  int nNum = 60;
  float fNum = 5.78;

  //  變量賦值
  nNum = 70;
  fNum = 5.67;

  printf("%d\n",nNum);

  return 0;
}
