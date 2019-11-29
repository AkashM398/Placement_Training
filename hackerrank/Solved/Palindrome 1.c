/*
Question:

Implement the function palindrome that accepts one string as an argument and returns 1 if the string is a palindrome and 0 otherwise.

A palindrome is a string that remains the same even when reversed.

Sample Input 0

kawaki
Sample Output 0

0
*/

//Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ char str[20];
    int i, l;
    int flag=0;
    scanf("%s",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]!=str[l-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag){printf("0");}
    else{printf("1");}
    return 0;  
    
    return 0;
}