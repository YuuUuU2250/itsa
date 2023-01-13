#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int ints[N], sum = 0, mulOf6 = 0;
    for(int i=1; i<=N; i++){
        if(!(i % 6)){
            ints[mulOf6++] = i;
        }
    }
    for(int i=0; i<mulOf6; i++){
        if(ints[i] % 4){
            sum += ints[i];
        }
    }
    printf("%d\n", sum);
}