#include <stdio.h>

int main(){
    long long arr[6], outp = 0;
    for(int i=0; i<6; i++){
        scanf("%lld", &arr[i]);
        outp += arr[i] * arr[i] * arr[i];
    }
    printf("%lld\n", outp);
}