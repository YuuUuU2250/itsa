#include <stdio.h>

int main(){
    int inp, outp;
    scanf("%d", &inp);
    inp /= 3;//最大可整除3的值
    outp = inp * (inp+1) / 2;
    outp *= 3;
    printf("%d\n", outp);
}