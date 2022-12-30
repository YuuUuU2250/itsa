#include <stdio.h>

int main(){
    long long outp = 1;
    int i;
    scanf("%d", &i);
    if(i > 31){
        printf("Value of more than 31\n");
    }
    else{
        outp <<= i;
        printf("%lld\n", outp);
    }
}