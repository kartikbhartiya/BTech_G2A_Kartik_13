#include <stdio.h>

int main(){
    char c[100];
    scanf("%s",c);
    int n = strlen(c);
    int cnt = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(c[i] == 'a' || c[i] == 'e' || c[i] == 'o' || c[i] == 'u') cnt++;
    }
    printf("The number of vowels is %d",cnt);
    return 0;
}