
//Program 2: Write a program to search an element from array(Linear search)

#include<stdio.h>
#include<conio.h>

void main(){

int a[100], pos=0, i, data, n, flag=0;

clrscr();

printf("Size of array: ");
scanf("%d",&n);
printf("\n Enter the array elements: \n");

for(i=0; i<n; i++)
 scanf("%d", &a[i]);

printf("\nEnter the data: "); scanf("%d", &data);

for(i=0; i<n; i++)
 if(a[i]==data){
	printf("\nThe element '%d' is present at the position: %d",a[i],i+1);
 } else{
	flag=1;
 }

if(flag==1){
	printf("\nSorry...data not found!");
}

getch();
printf("\n\nThanks for using! ");

getch();
}


