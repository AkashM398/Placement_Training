/*
Question:

An array is one of the most useful data structures provided by C. It is a collection of data that holds a fixed number of values of same type.

Declaration :

<data_type> <array_name>[size].
For example :

int arr[10] 
will create an array of name arr that holds 10 integers

char chars[25]
will create an array of name chars that holds 25 characters

The data in an array is 0-indexed, i.e. the first element is arr[0], second element is arr[1] and so on.

You can access the ith element by using arr[i - 1], hence the last index is N - 1 where N is size.

For this task, complete the code to input an array of 5 numbers and print it.

Sample Input 0

5 6 1 2 7

Sample Output 0

5 6 1 2 7
*/

//Solution

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n=5;
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        printf("%d ",arr[i]);
    }
    return 0;
}