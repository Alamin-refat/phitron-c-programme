/*Write a C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days.
Test Data :
Input no. of days: 2535
Expected Output:
6 Year(s)
11 Month(s)
15 Day(s)
*/

#include<stdio.h>

int main(){

    int total_days,years,months,days;
    printf("Input no. of days: ");
    scanf("%d",&total_days);

    years = total_days/365;
    days = total_days % 365;
    months = days /30;
    days= days % 30;

    printf("\n%d Year(s)\n", years);
    printf("%d Month(s)\n", months);
    printf("%d Day(s)\n", days);

    return 0;






}
