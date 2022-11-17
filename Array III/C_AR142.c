#include <stdio.h>

int main(){
    int M, N, outp = 0;
    scanf("%d %d", &M, &N);
    for(int i=1; i<=M; i++){
        int MM = i*i;
        if(MM % N == 0){
            outp += MM;
        }
    }
    printf("%d\n", outp);
}