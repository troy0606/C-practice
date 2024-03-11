#include <stdio.h>
#include <string.h>

int main(void)
{

  /**
   * 字串操作函數練習2
   */

  /**
   * 從鍵盤接收一個字串，保存到1個字串陣列中。
   * 然後從後面往前倒敘輸出這個字串。
   * 
   * 1. 要求在定義字串陣列時，需要使用 memset 進行輕零操作
   * 2. 要求輸出時，只輸出用戶輸入字串，不要輸出\0等空字符
   * 3. 給出適當的提示訊息和注釋
   */

  char stringAddressA[10];
  // 使用 memset 進行輕零
  memset(stringAddressA, '\0', sizeof(stringAddressA));

  printf("請輸入字串\n");
  gets(stringAddressA);
  for(int i = sizeof(stringAddressA) - 1; i >= 0; i--) {
    if(stringAddressA[i] != '\0') {
      putchar(stringAddressA[i]);
    }
  }
  putchar('\n');


  /**
   * 編寫一個程序
   * 先要求用戶輸入姓，然後輸入名
   * 然後使用1個逗號跟空格將姓跟名組合在一起
   * 並儲存顯示組合好的結果和結果的長度
  */

 char firstName[5] = "";
 char lastName[5] = "";
 char fullName[10] = "";

  puts("請輸入姓\n");
  gets(lastName);
  puts("請輸入名字\n");
  gets(firstName);

  strcat(fullName, firstName);
  strcat(fullName, ", ");
  strcat(fullName, lastName);

  printf("我叫 %s\n", fullName);

  return 0;
}
