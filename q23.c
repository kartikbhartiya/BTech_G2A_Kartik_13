#include <stdio.h>

int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n - i; j++){
            printf("%d", j);
        }
        for(int j = 0; j < 2*i; j++){
            printf(" ");
        }
        for(int j = n - i; j >= 1; j--){
            printf("%d", j);
        }
        printf("\n");
    }
}