#include <stdio.h>

int main(){
    int arr[100] = {1,2,3,4,5,6,7,8,9,10};
    int num;
    printf("Enter the number you want to search");
    scanf("%d",&num);
    for(int i = 0 ; i < 10 ; i++){
        if(arr[i] == num){
            printf("number found at location %d",i+1);
            return 0;
        }
    }
    printf("Number not found");
    return 0;
}