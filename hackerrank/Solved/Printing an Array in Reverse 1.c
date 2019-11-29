/*
Question:

Write a program that takes as input an array of size 5 and prints it in reverse.

Hint : Instead of running a loop from i = 0 to i = 4, you can run it from i = 4 to i = 0 using the decrement operator.

Sample Input 0

8 6 4 2 0
Sample Output 0

0 2 4 6 8
*/

//Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i;
    int n=5;
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=4;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}