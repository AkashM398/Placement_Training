/*
Question:

Write a program that takes as input two matrices and prints their product. If it is not possible to multiply the two matrices simply print -1.

Each matrix as input is of the form :

followed by number of lines with no. of elements on each line

More info on matrix multiplication : https://en.wikipedia.org/wiki/Matrix_multiplication

Hint : you will need three nested for loops to achieve the goal

Sample Input 0

2 2
1 0
0 1
2 2
1 1
1 1
Sample Output 0

1 1
1 1
*/

//Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
  int m, n, p, q, c, d, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];
 
  scanf("%d%d", &m, &n);
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &first[c][d]);
  scanf("%d%d", &p, &q);
  if (n != p)
    printf("-1\n");
  else
  {
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &second[c][d]);
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + first[c][k]*second[k][d];
        }
        multiply[c][d] = sum;
        sum = 0;
      }
    }
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d ", multiply[c][d]);
      printf("\n");
    }
  }
 
  return 0;
}