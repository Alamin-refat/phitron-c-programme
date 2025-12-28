/*Write a C program to input two numbers and perform all arithmetic operations to find sum, difference, product, quotient and modulus of two given numbers.
Example
Input
First number: 10
Second number: 5
Output
Sum = 15
Difference = 5
Product = 50
Quotient = 2
Modulus = 0
*/
#include<stdio.h>

int main(){

    int num1,num2;
    printf("First number: ");
    scanf("%d",&num1);
    printf("Second number: ");
    scanf("%d",&num2);
    int sum = num1+num2;
    int diff = num1 - num2;
    int product = num1*num2;
    int div = num1/num2;
    int modu = num1 % num2;
    printf("Sum = %d\n",sum);
    printf("Difference = %d\n",diff);
    printf("Product = %d\n",product);
    printf("Quotient = %d\n",div);
    printf("Modulus = %d\n",modu);




}
