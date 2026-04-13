#include <stdio.h>

int main(){
    int arr[10] = {11,9,4,6,7,8,3,2,5,1};
    for(int i = 0 ; i < 10 ; i++){
        for(int j = i + 1 ; j < 10 ; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0 ; i < 10 ; i++){
        printf("%d ",arr[i]);
    }
}

