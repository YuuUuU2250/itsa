#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int alphabet[26] = {0};
    
    for(int i=0; i<n; i++){
        char c[5];
        int inp;
        scanf("%s", &c[0]);
        inp = c[0] - 97;
        alphabet[inp]++;
    }
    for(int i=0; i<26; i++){
        if(alphabet[i] != 0){
            printf("%c %d\n", (97+i), alphabet[i]);
        }
    }
}
