#include <stdio.h>
#include <string.h>

/**
 * 年齡問題
 * 總共有 10 個小朋友排成1排
 * (由大到小排)每個小朋友都比後1個大1歲
 * 第 10 個小朋友 1歲
 * 試問第 1 個小朋友幾歲
 */
int askPeopleAge(int seq)
{
  if(seq == 10) {
    return 1;
  } else {
    int nextPeople = seq + 1;
    return askPeopleAge(nextPeople) + 1;
  }
}

// fib number
int fib(int N)
{
  if(N == 1) return 1;
  if(N == 2) return 1;

  return fib(N - 1) + fib(N - 2);
}

// 主函數，入口函數
int main(void)
{
  /**
   * 遞歸函數
   *
   * 定義: 函數呼叫自己
   * 
   * 注意: 要記得列出終止條件
   * 
   * 撇步: 觀察問題如何分解成小問題，看看每個小問題的關係
   * 再一直重複解決小問題
   * 如果一開始沒想法，可以先試著列出終止條件
   * 再想想如何透過最小幅度的解決問題，讓結果更靠近終止條件
   */

  int firstAge = askPeopleAge(1);
  printf("firstAge in askPeopleAge => %d\n", firstAge);

  int fibSeven = fib(7);
  printf("fibSeven in fib => %d\n", fibSeven);
  

  return 0;
}
