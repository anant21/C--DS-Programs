
//Program 1: Write a program to insert into array and display

#include<stdio.h>
#include<conio.h>

void main(){

int a[100], pos=0, i, data, n;

clrscr();

printf("Size of array: ");
scanf("%d",&n);
printf("\n Enter the array elements: \n");

for(i=0; i<n; i++)
 scanf("%d", &a[i]);

printf("\nEnter the data: "); scanf("%d", &data);

printf("\nEnter the position: "); scanf("%d", &pos);

for(i=n-1; i>=pos-1; i--)
 a[i+1] = a[i];

a[pos-1] = data;

printf("\nNew array: ");

for(i=0; i<=n; i++)
 printf("%d ", a[i]);

getch();
printf("\n\nThanks for using! ");

getch();
}


