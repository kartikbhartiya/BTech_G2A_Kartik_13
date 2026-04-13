#include <stdio.h>

int hcf(int a , int b){
    int hc = 1;
    for(int i = 1 ; i <= a ; i++){
        if(i > b) return hc;
        if(a%i == 0 && b%i == 0) hc = i;
    }
    return hc;
}

int lcm(int a , int b){
    for(int i = 1 ; i <= a*b ; i++){
        if(i % a == 0 && i % b == 0) return i;
    }
    return a*b;
}

int main(){
    printf("The HCF is %d",hcf(12,18));
    printf("The LCM is %d",lcm(4,6));
    return 0;
}