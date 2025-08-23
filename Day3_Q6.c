// Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
#include<stdio.h>
int main(){
    int A,B,C;
    
    printf("A= ");
    scanf("%d",&A);
    printf("B= ");
    scanf("%d",&B);
    
    C=A, A=B, B=C;

    printf("After swap A is %d \n",A);
    printf("After swap B is %d",B);
    return 0;
    

}