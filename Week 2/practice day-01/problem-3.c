/*একটি প্রোগ্রাম লিখ যেটি কোন সংখ্যা জোড় না বিজোড় বলতে পারে। */

#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    if(n%2==0){
        printf("%d number is even.\n",n);
    }
    else{
        printf("%d Number is odd.\n",n);
    }


    return 0;





}
