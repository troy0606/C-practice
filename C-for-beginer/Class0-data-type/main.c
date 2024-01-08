#include<stdio.h>
#include <stdlib.h>

int main (void) {  
    printf("型態\t\t大小（bytes）\n");
    printf("note: 1 bytes = 8 bit\n");
    printf("整數--------\n");
    printf("short\t\t%lu\n", sizeof(short));
    printf("int\t\t%lu\n", sizeof(int));
    printf("long\t\t%lu\n", sizeof(long));
    printf("整數--------\n");
    printf("浮點數--------\n");
    printf("float\t\t%lu\n", sizeof(float));
    printf("double\t\t%lu\n", sizeof(double));
    printf("long double\t%lu\n", sizeof(long double));
    printf("浮點數--------\n");
    printf("字元--------\n");
    printf("char\t\t%lu\n", sizeof(char));

    // 參考: https://openhome.cc/Gossip/CGossip/Datatype.html
  return 0;
}