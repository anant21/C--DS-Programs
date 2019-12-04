
//Program 6: Write a program to insert an element at the beginning of the linked list and display it.

#include<conio.h>
#include<stdio.h>

struct node{

  int d;
 struct node *n;

}*s,*q,*t;

void create()
{
  int data;
  q= (struct node *)malloc(sizeof(struct node));
  printf("\nEnter the data to be entered: ");
  scanf("%d",&data);
  q->d=data;
  q->n=NULL;
}


void display()
{
  t=s;
  while(t->n!=NULL)
  { printf("%d->",t->d);
    t=t->n;
  }
  printf("%d\n\n",t->d);

}

void addf()
{
  create();
  q->n=s;
  s=q;
}



void main()
{
  int ch;
  clrscr();

while(ch!=0)
{
  printf("1. Add at first \n");
  printf("2. Display \n");
  printf("3. Exit -> 0\n\n");
  printf("Choose : ");
  scanf("%d", &ch);

  switch(ch)
  { case 1: addf();
	    break;

    case 2: display();
	    break;

    case 0: exit(90);
	    break;

    default:printf("\n\nwrong choice !\n");
  }

}
}