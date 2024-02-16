#include <stdio.h>

int main(void)
{

  /**
   * 類型轉換
   *
   * 當混合不同類型資料進行計算，會發生類型轉換
   *
   * 不同類型資料進行計算時，應該先將操作資料轉為相同類型資料，
   * 再進行運算
   *
   * 轉換形式: 隱式類型轉換，顯式類型轉換
   *
   * 隱式類型轉換: 編譯器自動完成
   * 轉換規則: 兩個不同的資料類型在運算時，低精度轉往高精度資料類型
   * ---------------------------
   * 短位元組向長位元組
   * 有符號向無符號
   * 整數向浮點數
   * 單精度向雙精度
   * ---------------------------
   * 
   * 顯式類型轉換: 又叫強制類型轉換
   * 轉換規則: 直接將某數據轉換為指定類型
   *
   * 精度(由低到高)
   * short char
   * int
   * unsigned int
   * long float
   * double
   */

  float x;
  // 100 會被隱式轉換為 double 再進行算術運算
  // 但賦值給X 的時候會顯式轉換為 float
  x = 100 + 3.141592653;

  // 將1.6強制轉為整型 int
  int a = (int)1.6;

  int c = 1;
  x = 3.8945;
  // 將變量強制轉為整型 int，但變量 x 在系統中值不變(不會修改x在內存的類型)
  int b = c + (int)x;

  int aInt = 0;
  // scanf時變數前須加上「&」，因為scanf取得使用者的輸入後，
  // 再存入變數所在的地址，這就是為什麼要在後面的變數前加上「&」
  scanf("%d", &aInt);

  float bFloat = 0.0f;
  scanf("%f", &bFloat);

  float cFloat = aInt + bFloat;
  printf("%f\n", cFloat);


  double aDouble = 1.6;
  double bDouble = 1.7;

  printf("變數 aDouble = %lf, bDouble = %lf \n", aDouble, bDouble);
  printf("賦值類型轉換\n");
  int bInt = aDouble + bDouble;
  printf("賦值類型轉換 aDouble + bDouble = bInt(%d)\n", bInt);

  printf("臨時類型轉換\n");
  int cInt = (int)aDouble + (int)bDouble;
  printf("臨時類型轉換 (int)aDouble + (int)bDouble = cInt(%d)\n", cInt);

  printf("變數 aDouble = %lf, bDouble = %lf 內存沒有變\n", aDouble, bDouble);


  return 0;
}
