
/*circle area and perimeter*/

#include<stdio.h>


int main(){
    printf("Enter radius: ");

    double radius;
    scanf("%lf",&radius);


    const double PI=3.1416;


    double perimeter = 2*PI*radius;
    printf("perimeter = %.2lf\n",perimeter);

    double area =PI*radius*radius;
    printf("area = %.2lf\n",area);

    return 0;




}
