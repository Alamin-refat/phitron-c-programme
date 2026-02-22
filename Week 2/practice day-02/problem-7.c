/*Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
Test Data :
50 50 60
Expected Output :
This is an isosceles triangle.
*/

#include<stdio.h>

int main(){

    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);

    if(a==b && b==c && a==c){
        printf("This is an Equilateral triangle.\n");
    }

    else if(a==b || b==c || a==c){
        printf("This is an Isosceles triangle.\n");

    }

    else{
        printf("This is an Scalene triangle.\n");
    }

    return 0;


}
