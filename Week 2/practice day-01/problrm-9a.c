/*1+2+3+.....100     ধারা গুলোর যোগফল বের করার প্রোগ্রাম লিখ।
*/

#include<stdio.h>


int main(){

int n=100;
int sum=0;

for(int i=1;i<=n;i++){
    sum = sum +i;

}

printf("total sum = %d\n",sum);
return 0;




}
