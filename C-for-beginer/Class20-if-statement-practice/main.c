#include <stdio.h>
#include <string.h>

int main(void)
{

  /**
   * if 語句練習
   *
   */

  // 練習1 輸入兩整數，看看整數1是否能被整數2整除

  int aInt = 0;
  int bInt = 0;

  printf("請輸入兩個數字，先輸入一個 enter 後 再輸入一個 再 enter\n");

  scanf("%d\0\n", &aInt);
  scanf("%d\0\n", &bInt);

  if (aInt % bInt == 0)
  {
    printf("aInt %d 可以被 bInt %d 整除\n", aInt, bInt);
  }
  else
  {
    printf("aInt %d 不可以被 bInt %d 整除\n", aInt, bInt);
  };

  // 練習2 輸入兩次字串密碼，驗證兩次的密碼一致

  char psw1[20];
  char psw2[20];

  printf("請輸入新密碼\n");
  // 一般來說要將資料寫進位置所以變數前面要加 &，但因為數組本身就是指向位置，所以不用加 &
  scanf("%s", psw1);
  printf("請再次輸入新密碼確認\n");
  scanf("%s", psw2);

  // if(psw1 == psw2) 不行這樣寫，因為這是兩個不同的位置
  if (strcmp(psw1, psw2) == 0) {
    printf("兩次輸入密碼一致\n");
  } else {
    printf("兩次輸入密碼不一致\n");
  }

  return 0;
}
