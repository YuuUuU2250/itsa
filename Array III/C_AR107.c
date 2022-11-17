#include <stdio.h>

int main(){
    int arr[3][3];
    int outp;
    for(int i=0; i<3; i++){
        scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
    }
    outp = arr[0][0] * arr[1][1] * arr[2][2] - arr[0][2] * arr[1][1] * arr[2][0] + arr[1][0] * arr[2][1] * arr[0][2] - arr[0][1] * arr[1][0] * arr[2][2] + arr[2][0] * arr[0][1] * arr[1][2] - arr[0][0] * arr[1][2] * arr[2][1];
    printf("%d\n", outp);
}