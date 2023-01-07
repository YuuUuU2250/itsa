#include <stdio.h>

int main(){
    long long inp, outp = 1;
    scanf("%lld", &inp);
    for(int i=1; i<=inp; i++){
        outp *= i;
    }
    printf("%lld\n", outp);
}