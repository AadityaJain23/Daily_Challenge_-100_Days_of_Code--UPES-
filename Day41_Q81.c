// Q81: Count characters in a string without using built-in length functions.

#include<stdio.h>
int main(){
    
    char str[100];
    printf("Enter a string = ");
    scanf("%s",str);

    int i = 0;
    while(str[i] != '\0'){
        i++;
    }

    printf("The length of a string is = %d",i);
}