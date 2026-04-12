#include <stdio.h>

int main(){
    int arr[100] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int low = 0;
    int high = 11;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[mid] == num){
            printf("The number was found on %d element",mid+1);
            return 0;
        }
        if(arr[mid] > num) high = mid - 1;
        else low = mid + 1;
    }
    printf("The number was not found");
    return 0;
}