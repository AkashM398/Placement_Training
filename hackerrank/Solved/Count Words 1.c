/*
Question:

Write a program that takes as input one line of string data and prints the number of words in it.

Sample Input 0

The quick brown fox jumps over the lazy dog
Sample Output 0

9
*/

//Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char s[200];
    int count = 0, i;
 
    scanf("%[^\n]s", s);
    for (i = 0;s[i]!='\0';i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')
            count++;    
    }
    printf("%d", count + 1);
}