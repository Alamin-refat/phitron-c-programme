/* Write a C program that prints all even numbers between 1 and n (inclusive), where n is taken as input.*/


#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    if(n%2==0){
        printf("Number is even.");
    }
    else{
        printf("Number is odd.");
    }

    return 0;





}
