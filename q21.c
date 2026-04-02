#include <stdio.h>

int main(){
    int a[100] = {1,1,1,1,1,1,1,1};
    int b[100] = {2,2,2,2,2,2,2,2};
    int c[100];
    for(int i = 0 ; i < 8 ; i++){
        c[i] = a[i] + b[i];
    }
    for(int i  = 0 ; i < 8 ; i++){
        printf("%d ",c[i]);
    }
    return 0;
}
