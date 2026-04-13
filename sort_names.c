#include <stdio.h>
#include <string.h>

int main(){
    char arr[5][99] = {"Rohan","Raju","Sohit","Lemon","Anand"};
    char ch[50];
    for(int i = 0 ; i < 5 ; i++){
        for(int j = i + 1; j < 5 ; j++){
            if(strcmp(arr[i],arr[j]) > 0){
                strcpy(ch,arr[j]);
                strcpy(arr[j],arr[i]);
                strcpy(arr[i],ch);
            }
        }
    }
    for(int i = 0 ; i < 5 ; i++){
        printf("%s ",arr[i]);
    }
}