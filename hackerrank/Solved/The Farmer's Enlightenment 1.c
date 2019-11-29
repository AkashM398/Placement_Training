/*
Question:

The farmers sons got upset when they realised that the farmer favors the strongest of them. The farmer realises his mistake and hence is now no longer interested in who the strongest son is. Rather, he wants to know the collective strength of all his sons since Unity is Strength. The collective strength of all his sons is equal to the sum of strengths of all the sons. Again, since the farmer never went to school he needs your help to find it out.

Input Format

Five space separated integers, ith of them denoting S[i].

Constraints

0 <= S[i] <= 100

Output Format

Output one number equal to the collective strength.

Sample Input 0

5 8 4 6 2

Sample Output 0

25
*/

//Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    

    int n=5;
    int arr[n];
    int tot=0,i;
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        tot = tot+arr[i];
    }
    printf("%d",tot);
    return 0;
}

    {
        b[a[i]] = i;
    }
    for(k=1;k<=n;k++)
    {
        printf("%d ",b[k]);
    }
    return 0;
}