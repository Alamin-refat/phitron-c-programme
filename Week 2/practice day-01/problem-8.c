/* 7 number প্রোগ্রামটি ternary operator দিয়ে লিখ।  */


#include<stdio.h>


int main(){


    int a,b;
    scanf("%d %d",&a,&b);


    int big_number=(a>b ? a : b);


    printf("%d is greater.",big_number);


    return 0;




}
