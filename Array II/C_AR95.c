#include <stdio.h>

int main(){
    int ans[4], inp[4], A, B;
    scanf("%1d%1d%1d%1d", &ans[0], &ans[1], &ans[2], &ans[3]);
    do{
        A = 0, B = 0;
        scanf("%1d%1d%1d%1d", &inp[0], &inp[1], &inp[2], &inp[3]);
        if(inp[0] || inp[1] || inp[2] || inp[3]){//輸入0000結束迴圈
            for(int i=0; i<4; i++){
                if(ans[i] == inp[i]){//位置正確
                    A++;
                }
            }
            if(A != 4){
                for(int i=0; i<4; i++){
                    for(int j=i; j<4; j++){
                        if(i != j && ans[i] == inp[j]){//位置錯誤數字正確
                            B++;
                        }
                    }
                }
            }
            printf("%dA%dB\n", A, B);
        }
        else{
            break;
        }
    }while(1);
}
