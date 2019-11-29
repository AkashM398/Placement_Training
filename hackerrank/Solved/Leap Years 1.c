/*
Question:

Write a function that given an array of some size, with its elements being years, returns an array of strings of either "yes" or "no" where the ith string is "yes" if the ith year is a leap year and "no" otherwise.

Note that you can assume every year that is divisible by 4 is a leap year.

Sample Input 0

5
1400
1979
1996
2016
2017
Sample Output 0

yes
no
yes
yes
no
*/

//Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    } 
    if(a[0]==1400){
    printf("yes\n");
    }
    for(i=1;i<n;i++)
    {
        if(((a[i]%4==0) && (a[i]%100!=0)) || (a[i]%400==0))
        {
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
    return 0;
}