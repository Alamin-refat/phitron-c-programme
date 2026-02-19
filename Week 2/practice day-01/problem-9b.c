/*1+3+5+...+29 ধারা গুলোর যোগফল বের করার প্রোগ্রাম লিখ।*/



#include<stdio.h>

int main(){

    int n=29;
    int sum = 0;


    for(int i=1;i<=n;i=i+2){
        sum = sum+i;
    }
    printf("total sum = %d\n",sum);


    return 0;




}
