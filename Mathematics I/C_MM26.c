#include <stdio.h>

int main(){
    int inp;
    scanf("%d", &inp);
    for(int i=1; i<=inp; i++){
        printf("%d*%d=%d\n", i, i, i * i);
    }
}