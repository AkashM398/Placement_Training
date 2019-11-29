/*
Question:

Bug's friends play Secret Santa. He has n friends. Lets number them from 1 to n. For each friend i he knows pi, the person that i gave a gift to. Bug needs to find out ri for each friend i, which is the person that i received a gift from.

Input Format

First line contains one number n. Second line contains n space separated integers.

Constraints

1 <= n <= 100

Output Format

Print n space-separated integers: the i-th number should equal the number of the friend who gave a gift to friend number i.

Sample Input 0

4
2 3 4 1

Sample Output 0

4 1 2 3 
*/

//Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a[100],b[100];
    int i,n,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        b[a[i]] = i;
    }
    for(k=1;k<=n;k++)
    {
        printf("%d ",b[k]);
    }
    return 0;
}