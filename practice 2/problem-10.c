/*Write a C program that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values) and calculate the average value of the items.
	Expected Input/Output:
Weight - Item1: 15
No. of item1: 5
Weight - Item2: 25
No. of item2: 4
Expected Output:
Average Value = 19.444444
*/

#include <stdio.h>

int main() {
    float weight1, weight2, num1, num2;
    float total_weight, total_items, average;

    // Input for item 1
    printf("Weight - Item1: ");
    scanf("%f", &weight1);
    printf("No. of item1: ");
    scanf("%f", &num1);

    // Input for item 2
    printf("Weight - Item2: ");
    scanf("%f", &weight2);
    printf("No. of item2: ");
    scanf("%f", &num2);

    // Calculate total weight
    total_weight = (weight1 * num1) + (weight2 * num2);

    // Calculate total number of items
    total_items = num1 + num2;

    // Calculate average weight per item
    average = total_weight / total_items;

    // Display the result
    printf("Average Value = %f\n", average);

    return 0;
}
