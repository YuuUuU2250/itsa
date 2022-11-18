#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        int inp;
        scanf("%d", &inp);
        if(inp < 1000 || inp > 9999){
            printf("Failure Input\n");
        }
        else{
            int num[10] = {0};
            int d;
            d = (inp - (inp %1000)) / 1000;//千位數
            num[d]++;
            inp -= d * 1000;
            d = (inp - (inp %100)) / 100;//百位數
            num[d]++;
            inp -= d * 100;
            d = (inp - (inp %10)) / 10;//十位數
            num[d]++;
            inp -= d * 10;
            num[inp]++;
            int max = 0, lt = 1;//記錄最大重複數量以及是否有超過一組相同數字
            for(int j=0; j<10; j++){
                if(num[j] >= max){
                    if(max == 2){
                        lt = 0;
                    }
                    max = num[j];
                }
            }
            if(lt && max == 2){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }
    }
}