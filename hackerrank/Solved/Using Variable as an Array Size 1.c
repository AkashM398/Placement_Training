/*
Question: 

So far we used a constant to declare the size of the array : arr[10] or arr[5].

We can also use a variable instead : arr[N], or arr[size] etc.

We just need to make sure our variable holds an appropriate value before we it to declare the array.

Write a program to input a number N, the size of the array.

And then to input N integers, the elements of the array and print them in reverse order.

Sample Input 0

6
1 2 3 4 5 6

Sample Output 0

6 5 4 3 2 1
*/

//Solution

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i;
    int n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}