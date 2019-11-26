#include<stdio.h>

//this program takes O(n^2) time complexity
int main()
{
    int i,j,k;
    int n = 5;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=i;j++)
    {
        for(k=1;k<=100;k++)
    {
        printf("#");
    }
    }
    }
}

/*
proof:
    = (100 x 1) + (100 x 2) + .... + (100 x n)
    = 100(1 + 2 + ... + n)
    = 100 + n(n + 1)/2
    = O(n^2)
*/