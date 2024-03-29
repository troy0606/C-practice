#include <stdio.h>

int main(void)
{

  /**
   * 二維陣列
   * 定義: 二維陣列的每個元素，都是相同元素的一維陣列
   *
   * 如何定義陣列
   * 類型 陣列名[常量表達式1][常量表達式2]
   * ex: int array[3][4] 3個元素的二維陣列，每個元素是一個大小為4的整數型元素一維陣列
   */

  // 定義可以存放3個元素的二維陣列，每個元素是一個大小為4的整數型元素一維陣列
  // 合法的初始化方式1
  // 分別給所有二位元素賦值
  int arrayA[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

  // 合法的初始化方式2
  // 因為其實在內存裡還是存成一個連續空間的形式，所以可以這樣賦值
  int arrayB[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

  // 合法的初始化方式3
  // 部分賦值，沒有賦值的部分預設為0，但應該還是會有一維陣列沒有初始化造成的問題
  int arrayC[3][4] = {{1}, {5}, {9}};
  // for(int i =0; i<3;i++) {
  //   for(int j =0; j<4;j++)
  //   printf("arrayC[%d][%d] = %d\n",i,j,arrayC[i][j]);
  // }
  int arrayD[3][4] = {1, 2};
  // for(int i =0; i<3;i++) {
  //   for(int j =0; j<4;j++)
  //   printf("arrayD[%d][%d] = %d\n",i,j,arrayD[i][j]);
  // }

  // 極端的初始化方式
  // 所有元素預設賦值為0
  int arrayE[3][4] = {};
  // for(int i =0; i<3;i++) {
  //   for(int j =0; j<4;j++)
  //   printf("arrayE[%d][%d] = %d\n",i,j,arrayE[i][j]);
  // }

  // 驗證2維陣列的內存是連續的
  // 通過打印元素地址來判斷 需要用到 %p
  // ps: 整數 佔 4bytes
  int arrayF[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
      printf("arrayF[%d][%d] = %p\n", i, j, &arrayF[i][j]);
  }
  // 內存位置指向連續空間，因為整數佔 4 bytes 所以可以看到每個元素的間距是16進位的4

  // 二維陣列的名字是整個二維陣列的內存起始地址，也是二維陣列中第一個元素的起始地址
  // 證明:
  printf("arrayF 的起始位置 %p\n", &arrayF);

  // 測試 %p 打印變量地址
  int a = 10;
  printf("int &a = %p\n", &a);

  // 練習 定義兩個同樣大小的2維陣列，打印出兩個二維陣列的元素及相同 index 元素相加的值
  int arrayG[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int arrayH[2][3] = {10, 20, 30, 40, 50, 60};
  printf("定義兩個同樣大小的2維陣列，打印出兩個二維陣列的元素及相同 index 元素相加的值\n");
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("arrayG %d + arrayH %d = %d\n", arrayG[i][j], arrayH[i][j], arrayG[i][j] + arrayH[i][j]);
    }
  }

  /** 補充: 多維陣列
   * 表示: 元素類型 陣列名稱[常數表達式1][常數表達式2]...[常數表達式n]
   * ex : int multiDimension[3][2][3]
   */

  return 0;
}
