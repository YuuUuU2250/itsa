#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int inp[N], sum[N], outp[N];
    //input
    for(int i=0; i<N; i++){
        scanf("%d", &inp[i]);
        outp[i] = inp[i];
        sum[i] = 0;
        int j = 1;
        while(inp[i] % j != inp[i]){
            j *= 10;
        }
        do{
            sum[i] += inp[i] / j;
            inp[i] %= j;
            j /= 10;
        }while(j > 0);
    }
    //bubble sort
    for(int i=0; i<N-1; i++){
        for(int j=0; j<N-i-1; j++){
            int temSum, temOutp;
            if(sum[j] > sum[j+1]){
                temSum = sum[j];
                temOutp = outp[j];
                sum[j] = sum[j+1];
                outp[j] = outp[j+1];
                sum[j+1] = temSum;
                outp[j+1] = temOutp;
            }
            else if(sum[j] == sum[j+1]){
                if(outp[j] > outp[j+1]){
                    temSum = sum[j];
                    temOutp = outp[j];
                    sum[j] = sum[j+1];
                    outp[j] = outp[j+1];
                    sum[j+1] = temSum;
                    outp[j+1] = temOutp;
                }
            }
        }
    }
    //output
    printf("%d", outp[0]);
    for(int i=1; i<N; i++){
        printf(" %d", outp[i]);
    }
    printf("\n");
}
