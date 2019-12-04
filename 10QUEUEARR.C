
// Program 10: Queue using array.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define n 5

//queue array

void insert(int a[], int data, int *f, int *r) {

if(*r==n-1)
  {	printf("\nQueue Full!"); getch(); exit(0); }

  *r+=1;
a[*r] = data;

if(*r==0)
{*f=*r;}


}

void del(int *f, int *r){

if(*r<=0)
{	printf("\nQueue Empty !"); getch(); exit(0); }


if(*f<*r)
 { *f+=1;
  } else
	{*f=-1; *r=-1;}
}

void display(int a[], int *f, int*r){

int i;

printf("\n\nArr QUEUE: ");
for(i=*f;i<=*r;i++)
	printf("%d-->",a[i]);

printf("\n\n");
}

void main() {

int a[50],i, *f=-1,*r=-1, c, data;

clrscr();
while(c!=4){
printf("\n 1. Insert");
printf("\n 2. Delete");
printf("\n 3. Display");
printf("\n 4. Exit\n");
printf("\n Choice: "); scanf("%d",&c);

switch(c){

	case 1: printf("\nEnter data: "); scanf("%d",&data);

		insert(a,data,&f,&r); break;

	case 2: del(&f,&r); break;

	case 3: display(a,&f,&r); break;

	case 4: exit(0);

	default: exit(0);


}
}
getch();
}