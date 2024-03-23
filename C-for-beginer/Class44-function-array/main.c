#include <stdio.h>
#include <string.h>

/**
 * 交換陣列第一個 index
 * 3. 被調函數 修改形參數組內容，會改變 主調函數 中實參內容(傳址)
 */
int swapIntArrayFirstIndex(int numArray[5], int num)
{
  numArray[0] = num;
}

// 被調函數 形參 傳值
int swapIntValue(int numA, int numB)
{
  int temp = numB;
  numB = numA;
  numA = temp;
  printf("swapIntValue numA(%d) numB(%d)\n", numA, numB);
}

// 被調函數 形參 傳址
/**
 * 補充: int *numAPointer, int *numBPointer 應該是指標變數
 * 主調函數 傳入的實參是 &numA = 變數位址
 * 被調函數 傳入的形參是 *numAPointer(形參) == *&numA(實參)
 * 
 * 參考
 * https://kopu.chat/c%e8%aa%9e%e8%a8%80-%e8%b6%85%e5%a5%bd%e6%87%82%e7%9a%84%e6%8c%87%e6%a8%99%ef%bc%8c%e5%88%9d%e5%ad%b8%e8%80%85%e8%ab%8b%e9%80%b2%ef%bd%9e/
 */ 
int swapIntAddressValue(int *numAPointer, int *numBPointer)
{
  int temp = *numAPointer;
  *numBPointer = *numAPointer;
  *numAPointer = temp;
  printf("swapIntAddressValue *numAPointer(%d) *numBPointer(%d)\n", *numAPointer, *numBPointer);
}

// 主函數，入口函數
int main(void)
{
  /**
   * 函數與陣列
   *
   * 前情提要: 1個byte是計算機處理數據的最基本單元
   * 1 byte = 8 bit = 2^8 = 00000000 ~ 11111111(255)
   *
   * 1. 陣列名 == 陣列元素首地址
   * 2. 主調函數 傳遞數組名時，會將數組首地址當作參數傳遞
   * 3. 被調函數 修改形參數組內容，會改變 主調函數 中實參內容(傳址)
   */

  int intArray[5] = {1, 2, 3, 4, 5};
  char charArray[5] = "1234";

  // 1. 陣列名 == 陣列元素首地址
  /**
   * ps: 陣列首地址 = 陣列的第一個元素的地址
   *     陣列元素 = 所佔內存中的第一個基本內存單位的地址 
   *       ex: intArray[0] = 000000000061FE00 
   *           intArray[0] 內存其實佔了 000000000061FE00 ~ 000000000061FE03
   *           因為 int 佔 4 bytes
   *           每個內存基本單位是 1 byte
   */
  if (intArray == &intArray[0])
  {
    printf("陣列名 intArray(%p) == intArray[0](%p) 陣列首元素 地址\n", intArray, &intArray[0]);
  }

  for (int i = 0; i < 5; i++)
  {
    // 每個位置的值間格4，因為 int = 4bytes，而陣列是一段連續的內存空間
    printf("intArray index(%d),value=(%d) address=(%p)\n", i, intArray[i], &intArray[i]);
  }

  putchar('\n');

  for (int i = 0; i < 5; i++)
  {
    // 每個位置的值間格1，因為 char = 1bytes，而陣列是一段連續的內存空間
    printf("charArray index(%d),value=(%d) address=(%p)\n", i, charArray[i], &charArray[i]);
  }

  // 2. 傳遞數組名時，會將數組首地址當作參數傳遞
  swapIntArrayFirstIndex(intArray, 4);

  int numA = 2;
  int numB = 9;

  printf("numA(%d) numB(%d) before swap\n", numA, numB);
  printf("address => numA(%p) numB(%p) before swap\n", &numA, &numB);

  swapIntValue(numA, numB);
  printf("numA(%d) numB(%d) after swapIntValue\n", numA, numB);

  swapIntAddressValue(&numA, &numB);
  printf("numA(%d) numB(%d) after swapIntAddressValue\n", numA, numB);
  printf("address => numA(%p) numB(%p) after swapIntAddressValue\n", &numA, &numB);

  return 0;
}
