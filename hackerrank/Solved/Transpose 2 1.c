/*
Question:

Write a program that accepts an NxM matrix as input and prints its transpose.

Details about transpose : https://en.wikipedia.org/wiki/Transpose

Note that you also have to take as input N and M, the size of the matrix.

Sample Input 0

2 4
1 2 3 4
5 6 7 8
Sample Output 0

1 5
2 6
3 7
4 8
*/

//Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int m, n, c, d, matrix[10][10], transpose[10][10];
  scanf("%d%d", &m, &n);
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &matrix[c][d]);
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      transpose[d][c] = matrix[c][d];
  
  for (c = 0; c < n; c++) {
    for (d = 0; d < m; d++)
      printf("%d ", transpose[c][d]);
    printf("\n");
  }

  return 0;
}