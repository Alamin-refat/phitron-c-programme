/*Write a C program to input principle, time and rate (P, T, R) from the user and find Simple Interest and principal plus interest.
Example
Input
Enter principle: 1200
Enter time: 2
Enter rate: 5.4
Output
Simple Interest = 129.600006
Principal + Interest = 1329.6

           Hint: Formula to find simple interest:
*/

#include<stdio.h>

int main(){

    int p,t;
    float r;
    printf("Enter principle: ");
    scanf("%d",&p);
    printf("Enter time: ");
    scanf("%d",&t);
    printf("Enter rate: ");
    scanf("%f",&r);

    float interest = (p*t*r)/100;
    float total = p + interest;

    printf("Simple Interest = %f\n",interest);
    printf("Principal + Interest = %.1f\n",total);





}
