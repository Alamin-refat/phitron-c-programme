#include <stdio.h>

int main(){

    int num1,num2;
    scanf("%d %d",&num1,&num2);

    int jogfol =num1+num2;
    printf("%d + %d = %d\n",num1,num2,jogfol);

    int biyogfol =num1-num2;
    printf("%d - %d = %d\n",num1,num2,biyogfol);

    int gun =num1*num2;
    printf("%d * %d = %d\n",num1,num2,gun);

    int vag =num1/num2;
    printf("%d / %d = %d\n",num1,num2,vag);

    int vagsesh =num1%num2;
    printf("%d %% %d = %d\n",num1,num2,vagsesh);



}
