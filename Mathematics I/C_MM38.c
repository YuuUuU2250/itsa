#include <stdio.h>

int main(){
    int s[3], fit = 0;
    scanf("%d %d %d", &s[0], &s[1], &s[2]);
    for(int i=0; i<2; i++){//sorting
        for(int j=0; j<2-i; j++){
            if(s[j] >= s[j+1]){
                int temp = s[j+1];
                s[j+1] = s[j];
                s[j] = temp;
            }
        }
    }
    if(s[2] < s[0] + s[1]){
        printf("fit\n");
    }
    else{
        printf("unfit\n");
    }
}