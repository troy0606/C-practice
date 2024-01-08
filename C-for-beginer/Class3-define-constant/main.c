#include<stdio.h>

/**
 * 符號常量
 * 預編譯指令，在程式執行前，要先進行編譯
 * 在編譯時會把 自定義的 符號常量 跟程式碼用到的地方做替換
 * ex: define 大寫字母取名 需要替換的值
**/
#define CLASSNUMBER 8
int main () {

  // a = CLASSNUMBER;
  // b = CLASSNUMBER;
  // c = CLASSNUMBER;

  // %d 整數的占位符
  // 只有這樣放數字才會被引進到字串的內容
  printf("dancer say:\" 今天雨很大 %d \"\n", CLASSNUMBER);

  return 0;
}
