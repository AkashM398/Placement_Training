/*
Question:

Just as 2D matrix, you can declare an array of as many dimensions as you want.

For example : 3D array : int arr3d[5][5][5], 4D array : int arr4d[5][5][5][5] and so on.

For this task, you are to write a program that adds two 3x3 matrices and prints the result

Sample Input 0

1 2 3
4 5 6
7 8 9
3 2 1
6 5 4
9 8 7
Sample Output 0

4 4 4
10 10 10 
16 16 16
*/

//Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int matA[3][3],matB[3][3],matC[3][3];
    int r,c,k;
    
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            scanf("%d",&matA[r][c]);
        }
    }
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            scanf("%d",&matB[r][c]);
        }
    }
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            matC[r][c]=0;
            for(k=0;k<3;k++)
            {
                matC[r][c]= matA[r][c]+matB[r][c];
            }
        }
    }
       
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d ",matC[r][c]);
        }
            printf("\n");
    }
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