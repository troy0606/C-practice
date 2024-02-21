#include <stdio.h>
#include <string.h>

int main(void)
{

  /**
   * infinite loop 無限循環 
   *
   * 在if條件永遠為true，無終止條件
   * 可以通過 break, return 結束
   * 
   * ex:
   * 沒有改變循環判斷條件
   * int index = 1;
   * while(index < 5) {
   *    printf("xxxx");
   * }
   * 
   * 有改變循環判斷條件，但是是錯的方向
   * int index = 1;
   * while(--index < 5) {
   *    printf("xxxx");
   * }
   *
   */

  // 應用: 重複驗證輸入，直到輸入正確，不能輸入超過3次
  /**
   * 分析
   * 
   * 死循環 loop
   *    if 輸入正確
   *        break
   * 
   *    if times == 2
   *        break
   * 
   *    times++
  */

  int times = 0;
  while(1) {
    printf("請輸入數字\n");
    char input[7] = "******";
    scanf("%s", input);

    if(strcmp(input, "123456") == 0) {
      printf("輸入正確\n");
      break;
    };

    if(times == 2) {
      printf("輸入超過3次，請過幾分鐘再試\n");
      break;
    }

    times++;
  };

  for(int times = 0; times < 3; times++) {
    printf("請輸入數字\n");
    char input[7] = "******";
    scanf("%s", input);
    if(strcmp(input, "123456") == 0) {
      printf("輸入正確\n");
      break;
    };

    if(times == 2) {
      printf("輸入超過3次，請過幾分鐘再試\n");
      break;
    }
  }

  return 0;
}
