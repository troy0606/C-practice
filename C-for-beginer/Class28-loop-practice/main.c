#include <stdio.h>

int main(void)
{

  /**
   * loop practice 循環語句練習
   */

  // #1 從鍵盤上輸入1整數，從1-100找到能被它整除的整數，並輸出

  int number1 = 0;
  printf("請輸入1整數\n");
  scanf("%d", &number1);

  for(int i = 1; i<=100; i++) {
    if(i%number1 == 0) {
      printf("%d 能被輸入數字 %d 整除\n", i, number1);
    }
  }

  printf("練習 1 結束\n");

  // #2 雞兔同籠，共88隻，總共244隻腳，雞兔個多少隻

  int totalAnimal = 88;
  int totalFeet = 244;
  printf("雞兔同籠，共 %d 隻，總共 %d 隻腳，雞兔個多少隻\n", totalAnimal, totalFeet);
  for(int chicken = 0; chicken <= totalAnimal; chicken++) {
    int rabbit = totalAnimal - chicken;
    if((rabbit * 4 + chicken * 2) == totalFeet) {
      printf("雞有 %d 隻，兔有 %d 隻\n", chicken, rabbit);
      break;
    }
  }

  printf("練習 2 結束\n");

  return 0;
}
