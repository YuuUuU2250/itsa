#include <stdio.h>

int main(){
    int arr[6];
    for(int i=5; i>=0; i--){
        scanf("%d", &arr[i]);
    }
    printf("%d", arr[0]);
    for(int i=1; i<6; i++){
        printf(" %d", arr[i]);
    }
    printf("\n");
}