#include<stdio.h>
/**
 * stdio.h: 系統庫文件
 * #include 幫忙導入頭文件的預編譯指令
 * 
 * 引入系統庫後面的符號代表搜索路徑不同
 * <> 代表直接查找系統自帶的庫 
 * " " 代表優先查找用戶自定義的庫，不存在的話則去 系統自帶
**/

/**
 * main() 主函數 作為程序的唯一入口，僅有一個
**/ 
int main () {
  // printf: 存在stdio.h 系統庫文件的工具
  // 語句
  // \n 表示換行
  printf("Hello word!\n");
  return 0;
}
