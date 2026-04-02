#include <stdio.h>

int main(){
    int arr[100][100] = {{1,2,3},{4,5,6},{7,8,9}};
    int num;
    int cnt = 0;
    printf("Enter the number you want to find the frequency of");
    scanf("%d",&num);
    for(int i = 0 ; i < 3; i++){
        for(int j = 0 ;  j < 3 ; j++){
            if(a[i][j] == num) cnt++;
        }
    }
    printf("The number of elements in the matrix is %d",cnt);
    return 0;
}