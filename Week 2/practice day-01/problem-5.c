/*একটি প্রোগ্রাম লিখ যা ১oo তে মার্ক ইনপুট নিয়ে গ্রেড আউটপুট দিতে পারে।  এখানে গ্রেড এর টেবিল দেওয়া হল।
	80-100: A+
	70-79: A
	60-69: B
	50-59: C
	40-49: D
	0-40: F
*/
 #include<stdio.h>

 int main(){


    int marks;
    scanf("%d", &marks);

    if(marks>=80){
        printf("A+");
    }
    else if(marks>=70){
        printf("A");
    }
    else if(marks>=60){
        printf("B");
    }
    else if(marks>=50){
        printf("C");
    }
    else if(marks>=40){
        printf("D");
    }
    else{
        printf("F");
    }



    return 0;

 }
