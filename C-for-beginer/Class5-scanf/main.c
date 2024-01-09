#include <stdio.h>

int main(void)
{

  int nNum = 60;
  // 字串可以指定字元空間用量
  // 但要記得要比字元數+1 因為字串的結尾都會帶 \0 (空字符)
  char str[5] = "1234";

  /**
   * scanf: 格式化輸入函數
   * &變數名稱: 變數記憶體位置
   *
   * scanf 可以輸入內容放到對應變數的記憶體位置
   * 修改變數的資料，但資料型態會是定義時候的資料類型
   * ex: nNum 輸入 abcd 不會寫進 &nNum 記憶體位置
   * ，但如果下面有 char[] 的 scanf 資料會自動寫進去該 scanf 的記憶體位置(不知道原因)
   **/
  scanf("%d\n", &nNum);
  /**
   * 多個 scanf 中間如果沒有用 \n (換行)隔開
   * 輸入第一個 scanf 的時候按 enter 結束輸入會被當作下一個 scanf 的輸入值
   * 要注意
   **/
  /**
   * 字串不用 指定記憶體位置(還不懂原因)
   * 參考: 就像一般陣列來說，字串也可以作為指標使用
   * (https://mycollegenotebook.medium.com/c-%E8%AA%9E%E8%A8%80%E7%AD%86%E8%A8%98-%E5%AD%97%E4%B8%B2-strings-ffe70ee5f5b8)
   **/
  scanf("\n%s", str);

  printf("nNum = %d\n", nNum);
  printf("int（bytes）\t\t%lu\n", sizeof(nNum));

  printf("str = %s\n", str);
  printf("char（bytes）\t\t%lu\n", sizeof(str));

  return 0;
}
