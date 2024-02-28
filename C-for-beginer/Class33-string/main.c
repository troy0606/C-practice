#include <stdio.h>

// 系統庫文件，存放字串操作函數
#include <string.h>

int main(void)
{

  /**
   * 字串
   * 定義: 位於雙引號當中的字元序列，在內存中以 '\0' 結束
   * 所占字節會比實際多一個
   * ex: "Hello" 內存中> H|e|l|l|o|\n
   *
   * 思考: 為什麼以 '\0' 結束
   * 因為所有的字元都是合法的所以要定義一個 字元 來當作結束
   * 否則變數不知道字串占到哪邊算結束
   *
   * 注意:
   * 1. 可以把一個字元常量賦值給一個字元變量，
   * 但不能把一個字串常量賦值給一個字元變量
   *  char ch = 'A' > ok!
   *  char ch1 = "A" > not ok!
   *
   * 2. C語言沒有字串變量，可以使用字串陣列來放字串
   * 3. 可以用其他類型來存字元，因為都是2進制的資料，但不要這樣做
   * 浪費內存(因為字元只占 1 byte)又混淆
   */

  /**
   * 字元的初始化
   * char szName1[] = {'T','a','i','w','a','n'};
   * char szName2[] = "Taiwan";
   * 思考: sizeof(szName1)? sizeof(szName2)?
   */
  //  szName1 > 6 byte
  char szName1[] = {'T', 'a', 'i', 'w', 'a', 'n'};
  //  szName2 > 7 byte，因為會自動補 \0
  char szName2[] = "Taiwan";
  printf("sizeof(szName1) = %d, sizeof(szName2) = %d\n", sizeof(szName1), sizeof(szName2));

  // 清空字串，字串初始函數
  // memset(陣列名,要清理內存使用的數據, 要清理的數量) 要引入 <string.h>
  // 通常建議 要清理內存使用的數據 請用\0
  memset(szName1, '\0', 10);
  for (int i = 0; i < 10; i++)
  {
    printf("%c\n", szName1[i]);
  }

  /**
   * printf("%s\n", szName2);
   * szName2 在這邊代表字串內存首地址
   * printf 會以1個byte為間隔來輸出字串(因為字元內存占1個byte)
   *
   */
  char tempSzName = '\0';
  int szNameIndex = 0;
  while (szName2[szNameIndex] != tempSzName)
  {
    printf("szName2 第%d個字元是 %c，內存位置 %p \n", szNameIndex, szName2[szNameIndex], &szName2[szNameIndex]);
    szNameIndex++;
  }
  //  for(int i = 0; i < 7; i++) {
  //   printf("szName2 第%d個字元是 %c，內存位置 %p \n",i, szName2[i], &szName2[i]);
  //  }

  // 求字串長度 strlen
  long szName2Length = strlen(szName2);
  printf("szName2 字串長度 %ld\n", szName2Length);
  // ps: 用 int szName2Length 也可以編譯成功

  /** 統整用到的 <string.h> 方法 
   * 
   * memset(陣列名,要清理內存使用的數據, 要清理的數量)
   * 用途: 用來清理字串的方法
   * 
   * strlen(陣列名) 
   * 用途: 用來求字串的長度(陣列內必須存放的是完整字串，否則會出問題，因為這個方法也是一個一個內存去看)
  */ 


  return 0;
}
