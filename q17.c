#include <stdio.h>

int main(){
    int arr[100][100] = {{1,2,3},{4,5,6},{7,8,9}};
    int sum = 0;
    for(int i = 0 ; i<3 ; i++){
       sum += arr[i][i];
    }
    printf("The sum of diagonal elements of the matrix is %d",sum);
    return 0;
}