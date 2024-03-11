#include <stdio.h>
#include <string.h>

int main(void)
{

  /**
   * 字串操作函數練習1
   */

  /**
   * 從鍵盤接收一個字串，並統計其中字元的個數
   */

  // 會初始 字串為 長度19個\0 + 1個\0(所有字串都會有的結尾)
  char strInputA[20] = "";
  printf("請輸入字串 strInputA\n");
  // scanf("%s",strInputA);
  gets(strInputA);

  printf("字串 strInputA 長度為 %d \n", strlen(strInputA));

  /**
   * 編寫一個程序，字串A/B長度都為100，
   * 分別從鍵盤給兩個字串賦值，賦值時要求
   * 字串A字串個數大於字串B，將字串B的字元都複製到字串A中
   */

  printf("編寫一個程序，字串A/B長度都為100，\n分別從鍵盤給兩個字串賦值，賦值時要求\n，字串A字串個數大於字串B，將字串B的字元都複製到字串A中\n");

  char strA[100] = "";
  char strB[100] = "";

  printf("請輸入 strA\n");
  gets(strA);
  printf("請輸入 strB\n");
  gets(strB);

  strcpy(strA, strB);
  printf("strA = %s\n", strA);

  /**
   *編寫一個程序，字串 A/B 的長度都為100，
   *鍵盤 字串賦值，兩個字串接再一起，strA/strB
   */

  char strC[100] = "";
  char strD[100] = "";

  printf("請輸入 strC\n");
  scanf("%s", strC);
  printf("請輸入 strD\n");
  scanf("%s", strD);
  strcat(strC, strD);

  printf("字串 strC 長度為 %d \n", strlen(strC));
  printf("字串 strC 內容為 %s \n", strC);

  /**
   * 定義一個 char 陣列 address，使用 memset 進行初始化
   * 從鍵盤上接收一個字元，保存到 address 中。
   * 在從鍵盤上接收一個字元保存到 字元變量 findChar 中。
   * 要求從 address 中查找是否有字元 findChar，輸出找到的次數。
   * ex: 字串為 "ABCDEDS"，要查找字元 D，則應該輸出 2
   * 如果沒有找到任何字元，則輸出沒有找到
   */

  char addressChar[20];
  memset(addressChar, '\0', sizeof(addressChar));
   printf("請輸入長度為 19 個字元的字串到 addressChar\n");
  // gets(addressChar);
  scanf("%s",addressChar);
  // puts(addressChar);
  printf("addressChar = %s\n", addressChar);

  char findChar = '\0';
  printf("請輸入 1 個字元到 findChar\n");
  // scanf 參數前要多帶一個換行，讓前一次輸入 scnaf 的換行被當成這個換行
  scanf("\n%c", &findChar);

  int showFindCharTime = 0;

  for(int i = 0; i < strlen(addressChar); i++) {
    if(addressChar[i]== findChar) {
      showFindCharTime++;
    }
  }

  if(showFindCharTime > 0) {
    printf("findChar 出現在 addressChar %d 次\n", showFindCharTime);
  } else {
    printf("沒有找到 findChar 出現在 addressChar \n");
  }

  return 0;
}
