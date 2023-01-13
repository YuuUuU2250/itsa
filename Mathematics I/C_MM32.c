#include <stdio.h>

int main(){
    int inp[3];
    scanf("%1d%1d%1d", &inp[0], &inp[1], &inp[2]);
    int val = inp[0] * 100 + inp[1] * 10 + inp[2], sum = 0;
    for(int i=0; i<3; i++){
        sum += inp[i] * inp[i] * inp[i];
    }
    if(val == sum){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
}