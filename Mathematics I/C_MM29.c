#include <stdio.h>

int main(){
    int inp;
    scanf("%d", &inp);
    int prime[inp], primes = 1;
    prime[0] = 2;
    for(int i=3; i<inp; i++){
        for(int j=0; j<primes; j++){
            if(!(i % prime[j])){
                break;
            }
            if(j == primes - 1){//檢查到最後都沒有因數，為質數
                prime[primes++] = i;
                break;
            }
        }
    }
    printf("%d\n", prime[--primes]);
}
