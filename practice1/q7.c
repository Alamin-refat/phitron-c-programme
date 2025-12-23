#include <stdio.h>

int main(){
    int inchi,feet,remaining_inchi;
    printf("Enter height is inches: ");
    scanf("%d",&inchi);

    feet = inchi/12;
    remaining_inchi=inchi % 12;

    printf("Your height is %d feet %d inches",feet,remaining_inchi);


    return 0;





}
