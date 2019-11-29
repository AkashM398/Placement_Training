/*
Question:

Given an array of size N and an integer X, Raju wants to know how many elements in the array are divisible by X. Help him find the answer.

Input Format

First line contains 2 integers N and X.
Second line contains N integers, the array arr[N].
1 <= N <= 100
1 <= arr[i], X <= 100

Output Format

One number denoting the count of elements that are divisible by X.

Sample Input 0

5 2
2 4 3 2 1
Sample Output 0

3
*/

// Solution

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,x,i;
    int arr[100];
    int count=0;
    scanf("%d%d",&n,&x);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
            if(arr[i]%x==0)
            {
                count++;
            }
    }
    printf("%d ",count);
    
    return 0;
}