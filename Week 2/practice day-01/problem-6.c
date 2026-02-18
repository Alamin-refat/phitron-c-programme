/*একটি প্রোগ্রাম লিখ যা ধনাত্মক সংখ্যা ইনপুট দিলে ১, শূন্য ইনপুট দিলে ০, আর নাইলে -১ প্রিন্ট করে।*/

#include<stdio.h>


int main(){


     int n;
     scanf("%d", &n);

     int a=1,b=0,c=-1;

     if(n>0){
        printf("%d",a);
     }
     else if(n==0){
        printf("%d",b);
     }
     else{
        printf("%d",c);
     }


     return 0;

}
