#include<stdio.h>

int main(){

    int limit,months;
    scanf("%d %d",&limit,&months);

    int baki=0;

    for(int i=1;i<=months;i++){
        int used;
        scanf("%d", &used);


        int month_limit=limit+baki;
        baki=month_limit-used;


    }

    int final_limit=limit+baki;
    printf("%d\n", final_limit);




}
