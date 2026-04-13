#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Please enter the number of elements");
    int n;
    scanf("%d",&n);
    int* ptr = (int*)malloc(n * sizeof(int));
    if(ptr == NULL) return 0;
    for(int i = 0 ; i < n ; i++){
        ptr[i] = i + 1;
    }
    for(int i = 0 ; i < n ; i++){
        printf("%d ", ptr[i]);
    }
    printf("Now change the number of elements");
    scanf("%d",&n);
    ptr = (int*)realloc(ptr,n * sizeof(int));
    for(int i = 0 ; i < n ; i++){
        ptr[i] = i + 1;
    }
    for(int i = 0 ; i < n ; i++){
        printf("%d ", ptr[i]);
    }
    return 0;
}