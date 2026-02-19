/*50 + 49 + 48 + 47 + …… ( প্রথম ২০টি পদ)  ধারা গুলোর যোগফল বের করার প্রোগ্রাম লিখ। */

#include<stdio.h>

int main(){

    int n=20;
    int sum=0;
    int count=0;

    for(int i=50;count<n;i--){
        sum=sum+i;
        count++;
    }

    printf("total sum= %d", sum);
    return 0;







}
