#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    int alphabet[26] = {0};
    char str[100];
    scanf("%s", &str[0]);
    for(int i=0; i<strlen(str); i++){
        int c;
        if(islower(str[i])){
            c = str[i] - 97;
        }
        else{
            c = str[i] - 65;
        }
        alphabet[c]++;
    }
    for(int i=0; i<26; i++){
        if(alphabet[i]){
            printf("%c %d\n", i+97, alphabet[i]);
        }
    }
}