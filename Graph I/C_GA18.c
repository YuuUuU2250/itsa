#include <stdio.h>

int main(){
    int arr[7][7] =
    {{0, 100, 1, 100, 1, 100, 1}, 
    {100, 0, 100, 1, 1, 100, 100}, 
    {1, 100, 0, 1, 100, 1, 1}, 
    {100, 1, 1, 0, 100, 1, 100}, 
    {1, 1, 100, 100, 0, 100, 100}, 
    {100, 100, 1, 1, 100, 0, 1}, 
    {1, 100, 1, 100, 100, 1, 0}};
    for(int k=0; k<7; k++){//Floyd-Warshall algorithm
        for(int i=0; i<7; i++){
            for(int j=0; j<7; j++){
                if(arr[i][j] > arr[i][k] + arr[k][j]){
                    arr[i][j] = arr[i][k] + arr[k][j];
                }
            }
        }
    }
    int i, j;
    do{
        scanf("%d %d", &i, &j);
        if(i || j){
            printf("%d\n", arr[i][j]);
        }
    }while(i || j);
}
