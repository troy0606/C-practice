#include <stdio.h>

// 預編譯指令，程式編譯前就已經固定的值，不會因為程式執行而改變
#define LENGTH 5
int main(void)
{

  /**
   * 陣列
   * 定義: 將相同資料類型按有序的形式集合
   * 1. 集合
   * 2. 有序
   * 3. 類型相同
   *
   * 如何定義陣列
   * 類型 陣列名[常量表達式]
   * ex: int array[10] 大小為10的整數 陣列，宣告時就要
   */

  // 定義可以存放10個元素的整數陣列
  // 多出來的元素會被當成超過的元素，可能會導致無法定義的行為
  // 參考: https://stackoverflow.com/questions/18929270/is-it-ok-to-have-excess-elements-in-array-initializer
  int array1[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  // 沒有塞滿定義空間是可以的
  float array2[5] = {1.0, 2.0};
  // 初始化不能有空一個到多個的元素
  // char array3[20] = {'aa',,'bb'};
  // 建議定義都要進行初始化，否則會有不可預期的資料
  // 參考: https://stackoverflow.com/questions/1597405/what-happens-to-a-declared-uninitialized-variable-in-c-does-it-have-a-value
  double array4[1] = {0.0};

  int nLength = 6;
  // 錯誤: 定義數組不可以用變量，如果 nLength 變了，陣列的長度也會改變
  short array5[nLength];
  // 可行: 定義在預編譯前的常數不會因為程式執行而改變
  long array6[LENGTH];

  for (int i = 0; i < LENGTH; i++)
  {
    array6[i] = i + 1;
    printf("陣列6 動態賦值 第%d個 為%d\n", i, array6[i]);
  }

  /** 陣列初始化 特例
   * 字串形式的陣列初始化
   * 可以寫成下列方式
   * 編譯器會自動把它轉成 str[0] = "h" str[1]="e" ... str[5] ="\n" (字串結尾都會帶到 \n)
   */
  char str[10] = "hello";

  /** 陣列初始化 注意
   * 花括號 {} 只能在初始化時使用
   * 初始化之後都必須要一個一個 index 去賦值
   */
  int number[5] = {1, 2, 3};
  //  以下寫法會被當成不對的，編譯器期望的 number[5] = XXX，XXX 必須是運算式
  // number[5] = {2, 4, 6};

  // 練習: 定義一個陣列 a，並將它初始化成，從2開始的六個連續偶數
  int a[6] = {0, 0, 0, 0, 0, 0};
  for (int i = 0; i < 6; i++)
  {
    a[i] = 2 * (i + 1);
  }

  for (int i = 0; i < 6; i++)
  {
    printf("陣列 a index %d 值為 %d\n", i, a[i]);
  }

  return 0;
}
