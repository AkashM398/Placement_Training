/*
Question:

When we declare a variable and forget to initialise it with some value, the variable will hold unexpected garbage values. Same thing happens to arrays. For arrays whose size is declared with a variable name, a for loop has to be used to initialise all the values manually.

For arrays whose size is defined by a constant, they can be initialised directly as :

arr[10] = {initial_value}. for example : int arr[25] = {0} will initialise all the values of arr to 0.

To complete this task, write a program that takes as input an array of size 10 and prints only elements whose index is odd. ie. arr[1], arr[3], arr[5] and so on.

Sample Input 0

1 5 4 6 12 67 2 4 10 9

Sample Output 0

5 6 67 4 9
*/

//Solution

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,j,n;
    n=10;
    int arr[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}