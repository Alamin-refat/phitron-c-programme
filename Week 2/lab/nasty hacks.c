/*You are the CEO of Nasty Hacks Inc., a company that creates small pieces of malicious software which teenagers may use to fool their friends. The company has just finished their first product and it is time to sell it. You want to make as much money as possible and consider advertising in order to increase sales. You get an analyst to predict the expected revenue, both with and without advertising. You now want to make a decision as to whether you should advertise or not, given the expected revenues.
Input
The input consists of
n
n cases, and the first line consists of one positive integer giving
n
n. The next
n
n lines each contain
3
3 integers,
r
r,
e
e and
c
c. The first,
r
r, is the expected revenue if you do not advertise, the second,
e
e, is the expected revenue if you do advertise, and the third,
c
c, is the cost of advertising. You can assume that the input will follow these restrictions:
1
≤
n
≤
100
1≤n≤100,
−
10
6
≤
r
,
e
≤
10
6
−10
6
 ≤r,e≤10
6
  and
0
≤
c
≤
10
6
0≤c≤10
6
 .

Output
Output one line for each test case: “advertise”, “do not advertise” or “does not matter”, indicating whether it is most profitable to advertise or not, or whether it does not make any difference.

Sample 1
Inputcopy	Outputcopy
3
0 100 70
100 130 30
-100 -70 40
advertise
does not matter
do not advertise*/

#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);


    for(int cs=1;cs<t;cs++){

        int normal_rev;
        int advert_rev;
        int advert_cost;

        scanf("%d %d %d",&normal_rev,&advert_rev,&advert_cost);

        int advrt_profit = advert_rev - normal_rev;


        if(advrt_profit>normal_rev){
            printf("advertise\n");
        }
        else if(advrt_profit==normal_rev){
            printf("does not matter\n");
        }
        else{
            printf("does not matter\n");
        }

    }






}
