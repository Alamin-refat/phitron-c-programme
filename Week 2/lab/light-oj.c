/*Input starts with an integer T (≤ 125), denoting the number of test cases.

Each case starts with a line containing two integers a and b. a denotes the number of problems in the first computer and b denotes the number of problems in the second computer. You can safely assume that a and b will be non-negative and not greater than 10.

Output
For each case, print the case number and the total number of problems. See the samples for exact formatting.

Sample
Input copy	Output copy
2
1 7
9 8
Case 1: 8
Case 2: 17

*/

#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int cs=1;cs<=t;cs++){
        int a,b;
        scanf("%d %d",&a,&b);
        printf("Case %d: %d\n",cs,a+b);


    }



}
