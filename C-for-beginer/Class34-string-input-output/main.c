#include <stdio.h>
# include <string.h>

int main(void)
{

  /**
   * 格式化輸入 scanf 問題
   * 注意: 不接受空格
   * 
   * 格式化輸出 printf 問題
   * 
   * 都是用 %s
   * 
   */

  // scanf 不接受空格 證明
  char strScanf[100] = "Good morning"; 
  scanf("%s", strScanf);
  // 輸入 Hello world
  printf("%s\n", strScanf);
  // 輸出 Hello ，因為scanf 接受字串時，會因為空格而補上 \0，
  // 導致 printf 輸出到 \0 就結束輸出，但實際上 Hello\0world 都還在

  // scanf("%3s", XXXX);
  // %3s 表示只會寫入3個字元，然後補上 \0

  // 如果 scanf("%3s", strScanf);
  // %3s 只會影響 strScanf 前三個字元，後面原本的字元不會變化

  char strA[100] = "Good morning";
  scanf("%5s", strA);

  // strlen 會看最後接到\0 前的長度，所以有寫滿 %5s size是5，沒有的話看 scanf 當下輸入的長度
  printf("strA 裡面是 %s，字串長度為 %ld\n", strA, strlen(strA));

  // m 會不見，應該是因為 那個字元被改為 \0
  for(int i = 0; i< 13; i++) {
    printf("strA 第 %d 個字元是 %c\n", i ,strA[i]); 
  }

  /**
   * 字元輸入函數 getchar
   * 用法: char temp = getchar()
   * 
   * 字元輸出函數 putchar
   * putchar(字元)
  */ 

 /**
  * 字串輸入函數 gets
  * gets(字串陣列名)
  * 
  * 字串輸出函數 puts
  * puts(字串陣列名 || 字串常量)
  */ 


  // gets 將字串寫入
  char strGets[100] ="";
  gets(strGets);

  // puts 將字串打印，會從頭開始一個字元一個字元輸出
  // 遇到 \0 會當作結束，所以如果字串裡面有包含 \0，會被截斷
  puts(strGets);

  char strB[100] = "ABC";
  printf("%s\n", strB);

  char strC[100] = "ABC";
  strC[1] = '\0';
  // 只會輸出 A，因為下一位被改成 \0 prinf 就當作結束了
  printf("%s\n", strC);

  char strD[4] = "ABC";
  strD[3] = "D";
  // 會報錯，因為結尾的 \0 被蓋掉了
  printf("%s\n", strD);

  return 0;
}
