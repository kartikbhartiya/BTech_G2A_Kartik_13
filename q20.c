#include <stdio.h>

int main(){
    int arr[100];
    int n;
    printf("please enter the elements in the number of elements in the array");
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i < n ; i++){
        sum += arr[i];
    }
    printf("the sum of the array is %d",sum);
}