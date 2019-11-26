#include<stdio.h>

//This program has O(log n) time complexity

int main()
{
    int i,n=5;
    for(i=1;i<=n;i=i*2)
    {
        printf("#");
    }
}

/*
proof:
    2k = n
    k = log(n)
      = O(log n)
*/