#include <stdio.h>
 
int main()
{
  int row, c, n, t;
  scanf("%d", &n);
 
  t = n;
 
  for (row = 1; row <= n; row++)  // Loop to print rows
  {
    for (c = 1; c < t; c++)  // Loop to print spaces in a row
      printf(" ");
 
    t--;
 
    for (c = 1; c <= 2*row - 1; c++) // Loop to print stars in a row
      printf("*");
 
    printf("\n");
  }
 
  return 0;
}
