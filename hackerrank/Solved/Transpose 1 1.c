/*
Question:

Write a program that accepts an NxN matrix as input and prints its transpose.

Details about transpose : https://en.wikipedia.org/wiki/Transpose

Note that you also have to take as input N, the size of the matrix.

Hint : Every element a[i][j] in old matrix becomes a[j][i] in transpose matrix Base Code :

Sample Input 0

3
1 2 3
4 5 6
7 8 9
Sample Output 0

1 4 7
2 5 8
3 6 9
*/

//Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int n, c, d, matrix[10][10], transpose[10][10];
  scanf("%d",&n);
  for (c = 0; c < n; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &matrix[c][d]);
  for (c = 0; c < n; c++)
    for (d = 0; d < n; d++)
      transpose[d][c] = matrix[c][d];
 
  for (c = 0; c < n; c++) {
    for (d = 0; d < n; d++)
      printf("%d ", transpose[c][d]);
    printf("\n");
  }

  return 0;
}