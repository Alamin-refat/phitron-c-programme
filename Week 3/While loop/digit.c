#include<stdio.h>

int main(){

    int x;
    scanf("%d", &x);

    int sum=0;

    while(x>0){
        int digit=x%10;
        x/=10;
        sum+=digit;
    }

    printf("Digit sum =%d\n",sum);






}
