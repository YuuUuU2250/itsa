#include <stdio.h>
#include <string.h>

int main(){
    char str[20];
    scanf("%s", &str);
    int len = strlen(str);
    int outp[len];
    for(int i=0; i<len; i++){
        outp[i] = str[i] - 97;
        printf("(%d)", outp[i]);
    }
    printf("\n");
}
