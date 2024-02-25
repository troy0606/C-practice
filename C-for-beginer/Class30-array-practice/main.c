#include <stdio.h>
#include <math.h>

int main(void)
{

  /**
   * 陣列練習
   */

  // 1. 定義一個有3個整數元素的陣列，陣列每個元素都是終端機輸入的，計算並印出該陣列的和

  int inputArray[3];
  int inputSum = 0;
  printf("請依序輸入陣列 inputArray 裡面的3個整數元素來取得總和\n");
  for (int i = 0; i < 3; i++)
  {
    scanf("%d", &inputArray[i]);
    inputSum += inputArray[i];
  }

  printf("inputArray 總合為 %d\n", inputSum);

  // 2. 定義一個有5個整數元素的陣列，打印出陣列中所有偶數
  printf("找出所有testArray 內定義的偶數\n");
  int testArray[5] = {5, 8, 9, 1, 2};
  for (int i = 0; i < 5; i++)
  {
    if (testArray[i] % 2 == 0)
    {
      printf("testArray 的偶數有 %d \n", testArray[i]);
    }
  }

  // 3. 定義一個有3個整數元素的陣列，陣列每個元素都是終端機輸入的，計算並印出該陣列的最小公倍數
  int inputArray1[3];
  int maxInput = 0;
  printf("請依序輸入陣列 inputArray1 裡面的3個整數元素來取得最小公倍數\n");
  for (int i = 0; i < 3; i++)
  {
    scanf("%d", &inputArray1[i]);
    if (maxInput < inputArray1[i])
    {
      maxInput = inputArray1[i];
    }
  }

  while (1)
  {
    int flag = 0;

    for (int i = 0; i < 3; i++)
    {
      if (maxInput % inputArray1[i] != 0)
      {
        flag = 1;
        break;
      }
    }

    if (flag == 0)
    {
      break;
    }

    maxInput++;
  }

  printf("inputArray1 最小公倍數為 %d\n", maxInput);

  // 4. 定義一個有3個整數元素的陣列，陣列每個元素都是終端機輸入的，組成由後到前的整數並印出
  printf("請依序輸入陣列 inputArray2 裡面的3個整數元素來取得倒過來的整數\n");
  int sum = 0;
  int inputArray2[3];
  for (int i = 0; i < 3; i++)
  {
    scanf("%d", &inputArray2[i]);
    int turn = pow(10, i);
    sum = inputArray2[i] * turn + sum;
  }
  printf("inputArray2 倒過來的整數是 %d\n", sum);

  // 5. 定義兩個有3個整數元素空間的空陣列，輸入陣列1的元素，並將元素複製到陣列2

  int arrayA[5];
  int arrayB[5];

  for (int i = 0; i < 5; i++)
  {
    printf("請輸入 arrayA 的 %d 個整數\n", i);
    scanf("%d", &arrayA[i]);
  }

  for (int i = 0; i < 5; i++)
  {
    arrayB[i] = arrayA[i];
    printf("arrayB 的 %d 個整數是 %d\n", i, arrayB[i]);
  }

  // 6. 輸入一個長度為 10 的整數行陣列，找出其中長度為3的連續元素最大和
  printf("請依序輸入 arrayC 10 個整數元素\n");
  int arrayC[10];
  int arrayCMaxSum = 0;
  int arrayCIndex = 0;
  for (int i = 0; i < 10; i++)
  {
    printf("請輸入 arrayC 第 %d 個元素\n",i);
    scanf("%d", &arrayC[i]);
    if (i < 3)
    {
      arrayCMaxSum += arrayC[i];
      arrayCIndex = i;
    }
    else
    {
      int roundAdd = arrayC[i - 2] + arrayC[i - 1] + arrayC[i];
      if (roundAdd > arrayCMaxSum)
      {
        arrayCMaxSum = roundAdd;
        arrayCIndex = i;
      }
    }
  }

  for(int i = arrayCIndex - 2; i<= arrayCIndex ; i++) {
    printf("arrayC 最大和的3個連續元素 index %d 是 %d\n",i, arrayC[i]);
  }
  return 0;
}
