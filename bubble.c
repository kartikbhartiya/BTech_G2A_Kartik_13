#include <stdio.h>

int main(){
    int arr[10] = {11,9,4,6,7,8,3,2,5,1};
    for(int i = 0 ; i < 9 ; i++){
        for(int j = 0 ; j < 9 - i ; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0 ; i < 10 ; i++){
        printf("%d ",arr[i]);
    }
}

