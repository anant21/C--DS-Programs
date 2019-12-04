
//Program 3:  Write a program to multiply two arrays in C.

#include <stdio.h>
#include <conio.h>

void main()
{
  int m, n, p, q, i, j, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];

  clrscr();
  printf("Enter number of rows and columns of first 2D array\n");
  scanf("%d %d", &m, &n);
  printf("Enter elements of first matrix\n");

  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++)
      scanf("%d", &first[i][j]);

  printf("Enter number of rows and columns of second 2D array\n");
  scanf("%d %d", &p, &q);

  if (n != p){
    printf("The arrays can't be multiplied with each other.\n");
    printf("Ensure no. of columns of first array should be equal to no. of rows of second array\n");
  }
  else
  {
    printf("Enter elements of second matrix\n");

    for (i = 0; i < p; i++)
      for (j = 0; j < q; j++)
	scanf("%d", &second[i][j]);

    for (i = 0; i < m; i++) {
      for (j = 0; j < q; j++) {
	for (k = 0; k < p; k++) {
	  sum = sum + first[i][k]*second[k][j];
	}

	multiply[i][j] = sum;
	sum = 0;
      }
    }

    printf("Product of the matrices:\n");

    for (i = 0; i < m; i++) {
      for (j = 0; j < q; j++)
	printf("%d\t", multiply[i][j]);

      printf("\n");
    }
  }

  getch();
}