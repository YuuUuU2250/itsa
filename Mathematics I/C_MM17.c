#include <stdio.h>

int main(){
    int a, b, max;
    scanf("%d %d", &a, &b);
    int div[a], divs = 0;
    for(int i=1; i<=a; i++){
        if(!(a%i)){
            div[divs++] = i;
        }
    }
    for(int i=0; i<divs; i++){
        if(!(b%div[i])){
            max = div[i];
        }
    }
    printf("%d\n", max);
}