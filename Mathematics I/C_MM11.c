#include <stdio.h>

int main(){
    int tenD, fiveD, oneD, val;
    scanf("%d", &val);
    tenD = val / 10;
    val %= 10;
    fiveD = val / 5;
    val %= 5;
    oneD = val;
    printf("NT10=%d\n", tenD);
    printf("NT5=%d\n", fiveD);
    printf("NT1=%d\n", oneD);
}