#include<stdio.h>
// This program has O(n^2) time complexity
int main()
{
    int i,j;
    int n=5;
    for(i=1/2;i<=n;i++) // ---> O(n/2)
    {
        for(j=1;j<=n/2;j++) // ---> O(n/2)
        {
            printf("#");
        }
    }
}

/*
proof:
    = n/2 x n/2
    = n/4
    = O(n^2)
*/