
//Program 11: Stack using array.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define n 5

//stack array

void push(int a[50], int data, int *top) {

if(*top==n-1)
  {	printf("\nStack Overflow!"); exit(0); }

  *top+=1;
a[*top] = data;

if(*top==n-1)
{printf("\n\nNo more can be pushed!");}


}

void pop(int *top){

if(*top<0)
{	printf("\nStack Underflow !"); getch(); exit(0); }

*top-=1;

if(*top<0)
{	printf("Cant pop anymore !"); exit(0);}

}

void display(int a[], int *top){

int i;

printf("\n\nArr STACK: ");
for(i=0;i<=*top;i++)
	printf("%d-->",a[i]);

}

void main() {

int a[50],i, *top=-1,c, data;

clrscr();
while(c!=4){
printf("\n 1. Push");
printf("\n 2. Pop");
printf("\n 3. Display");
printf("\n 4. Exit\n");
printf("\n Choice: "); scanf("%d",&c);

switch(c){

	case 1: printf("\nEnter data: "); scanf("%d",&data);
		push(a,data,&top); break;

	case 2: pop(&top); break;

	case 3: display(a,&top); break;

	case 4: exit(0);

	default: exit(0);


}
}
getch();
}