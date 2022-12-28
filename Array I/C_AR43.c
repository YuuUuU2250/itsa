#include <stdio.h>

long long int power(long long m, long long n);

int main(){
    long long m, n;
    while(scanf("%lld %lld", &m, &n) != EOF){
        printf("%lld\n", power(m, n));
    };
}

long long int power(long long m, long long n){
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return m;
    }
    return m * power(m, n-1);
}
