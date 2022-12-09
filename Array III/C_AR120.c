#include <stdio.h>

long long func(int);

long long f[36] = {0};

int main(){
    for(int i=0; i<=35; i++){//建表
        f[i] = func(i);
    }
    int n;
    scanf("%d", &n);
    printf("f(%d)=%lld\n", n, f[n]);
}

long long func(int n){
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return 1;
    }
    long long ans = 0;
    for(int i=0; i<n/2; i++){
        ans += f[i] * f[n-1-i];
    }
    ans *= 2;
    if(n%2){
        ans += f[n/2] * f[n/2];
    }
    return ans;
}