/*Write a C program that will first read an integer n, then read n integers. From those, it will find the sum of even integers.
Example:
Enter n: 5
Input 5 integers: 2 3 5 6 7
Sum of even integers = 8
*/

#include<stdio.h>

int main(){

    int n,number,sum=0;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Input %d integers: ",n);

    for(int i=1;i<=n;i++){
        scanf("%d", &number);

        if(number%2==0){
            sum = sum+number;
        }
    }

    printf("Sum of even integers = %d\n",sum);
    return 0;


}
