/*2 + 5 + 8 + 11 + 14 + …..   (প্রথম ১০টি পদ)  ধারা গুলোর যোগফল বের করার প্রোগ্রাম লিখ। */

#include<stdio.h>


int main(){

    int n=10;
    int sum=0;
    int count=0;


    for(int i=2;count<10;i=i+3){
        sum= sum+i;
        count++;
    }

    printf("total sum = %d\n", sum);
    return 0;








}
