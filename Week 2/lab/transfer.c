/*We have two bottles for holding water.

Bottle
1 can hold up to
A milliliters of water, and now it contains
B milliliters of water.

Bottle
2 contains
C milliliters of water.

We will transfer water from Bottle
2 to Bottle
1 as much as possible.

How much amount of water will remain in Bottle
2?*/



#include<stdio.h>


int main(){


    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);


    int water_left=a-b;
    int water_poured = water_left<c ? water_left : c;
    c -= water_poured;


    printf("%d", c);


    return 0;





}
