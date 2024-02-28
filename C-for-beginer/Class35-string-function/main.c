#include <stdio.h>
#include <string.h>

int main(void)
{

  /**
   * 字串操作函數
   * memset > 字串賦值
   * strlen > 查字串大小
   * strcmp > 檢查字串是否一樣
   * strcpy > 字串賦值(複製)
   * strncpy > 字串賦值(複製)，指定字元從哪裡開始複製
   */

  /**
   * memset 字串賦值
   * 用法: memset(字串陣列名,要賦值的資料, 要覆蓋的長度)
   * 用途1: 用來清理字串
   * ex: memset(字串陣列名,'\0',字串陣列長度)
   *
   * 用途2: 字串陣列單純賦值特定範圍
   *
   */

  /**
   * strlen 查字串大小
   * 用法: strlen(字串陣列名 || 字串常數)
   * 原理: 從頭檢查字串是否有\0，沒有就+1，有就結束，返回值不包含 \0 的長度
   *
   */

  char strA[10] = "ABC";
  //  長度為 4
  int strALength = strlen(strA);
  //  內存大小為 10
  int strASize = sizeof(strA);

  /**
   * strcmp 檢查字串是否一樣
   * 用法: strcmp(字串常量 || 字串陣列名, 字串常量 || 字串陣列名)
   * 原理: 將兩字串從頭檢查，同時比較從第1個字元到最後字元，檢查兩個字元的 ASCII 對應號碼是否一樣
   * 返回值: 兩字串相等回傳 0，字串 1 > 字串 2 返回 正數，否則返回 負數
  */

 char strB[3] = "AC";
 char strC[3] = "CC";

 int strB_strC_Compare = strcmp(strB, strC);

 if(strB_strC_Compare == 0) {
  printf("strB strC 字串相同\n");
 } else if(strB_strC_Compare > 0) {
  printf("strB 比 strC 字串長\n");
 } else {
  printf("strB 比 strC 字串短，或是長度一樣但內容不同\n");
 }

 /**
  * strcpy 字串賦值(複製)
  * 用法: strcpy(比第二個參數內存大的字串陣列名, 字串常量 || 字串陣列名)
  * 原理: 將參數2的字串複製給參數1，參數1的大小一定要大於參數2，
  * strcpy 會將參數2 字串的字元1個個複製，但如果遇到 字元 \0，
  * 就會結束處理
 */
  char strD[20];
  char strE[13] = "Hello Taiwan";
  strcpy(strD, strE);
  // strD = Hello Taiwan
  printf("strD = %s\n", strD);

  // 證明 strcpy 遇到\0 就不會繼續複製了
  char strF[6];
  strcpy(strF, "12345");
  // 最後會被 li 蓋掉，結尾也會加上\0
  strcpy(strF, "li");
  // 字串第2個位置的字元被改成 \0
  printf("strF[2] = %c\n",strF[2]);
  // 但後面的字元還是保持 4
  printf("strF[3] = %c\n",strF[3]);
  // 但後面的字元還是保持 5
  printf("strF[4] = %c\n",strF[4]);

  /**
   * strncpy 字串賦值(複製)，指定字元從哪裡開始複製
   * 用法: strncpy(比第二個參數內存大的字串陣列名,字串常量 || 字串陣列名, 參數2從頭開始算複製字元數量)
  */

  // strncpy(字串陣列1,字串陣列2 || 字串常量2, 字串2到第幾個字元)
  char strG[8] = "Hualien";
  char strH[5] = "love";

  strncpy(strG, strH, 2);
  // strG = loalien
  printf("strG = %s\n",strG);

  // 特別用法: 
  // strncpy( + 字串陣列1開始被複製的字元位置, + 字串陣列2開始複製的字元位置 ,字串2到第幾個字元)
  char strI[8] = "Hualien";
  char strJ[5] = "love";
  strncpy(strI+1, strJ+2, 2);
  /**
   * strI = Hvelien
   * strncpy(strI+1, strJ+2, 2) 參數解釋: 
   * strI+1 : H 下一位 u，所以複製的內容從 u 開始，
   * strJ+2 : l 下兩位 v，所以複製的內容從 v 開始，
   * 2 : strJ 從複製起頭的位置開始的兩個字元
  */
  printf("strI = %s\n",strI);

  return 0;
}
