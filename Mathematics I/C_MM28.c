#include <stdio.h>

int main(){
    int inp;
    scanf("%d", &inp);
    inp /= 35;
    for(int i=1; i<=inp; i++){
        if(i - 1){
            printf(" %d", i * 35);
        }
        else{
            printf("%d", i * 35);
        }
    }
    printf("\n");
}
