/*Write a C program that takes a positive float number and outputs its integer part and real part.
	Expected Input/Output:
		Enter Number: 3.578
		Integer part: 3
		Real part: .578
Hint: To find the real part, you can subtract the integer part from the number.
*/
#include <stdio.h>

int main() {
    float number;
    int integerPart, realPart;

    printf("Enter Number: ");
    scanf("%f", &number);

    integerPart = (int)number;
    realPart = (int)((number - integerPart) * 1000);

    printf("Integer part: %d\n", integerPart);
    printf("Real part: .%d\n", realPart);

    return 0;
}
