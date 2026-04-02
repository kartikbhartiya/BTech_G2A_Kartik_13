#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of rows");
    scanf("%d",&n);
    int a = 1;
    int num = 1;
    for(int i = 0 ; i < n ; i++){
        a = 1;
        num = 0;
        for(int j  = 0 ; j < 2*n ; j++){
            if(n < i+j < 2*n){
                printf(" ");
                continue;
                a = 2;
            }
            if(a == 1){
                num++;
                printf("%d",num);
            }
            else{
                printf("%d",num);
                num--;
            }
        }
    }
}