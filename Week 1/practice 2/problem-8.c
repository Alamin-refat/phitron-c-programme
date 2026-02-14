/*Write a C program to input temperature in degree Fahrenheit and convert it to degree Centigrade.
Example
Input
Temperature in fahrenheit = 205
Output
Temperature in celsius = 96.11 C

Hint: Formula to convert from degree Fahrenheit to degree Celsius is given by
*/

#include<stdio.h>

int main(){

    float f;
    printf("Enter temperature in Fahrenheit =  ");
    scanf("%f",&f);
    float C = (f-32)*5/9;
    printf("Temperature in Celsius = %.2f C\n",C);


    return 0;



}
