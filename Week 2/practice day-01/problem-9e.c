/*100 + 97 + 94 + 91 + ….  (0 এর চেয়ে বড় পর্যন্ত)   ধারা গুলোর যোগফল বের করার প্রোগ্রাম লিখ। */

#include<stdio.h>


int main(){

    int sum=0;

    for(int i=100;i>0;i=i-3){
        sum= sum+i;

    }
    printf("total sum = %d",sum);

    return 0;






}
