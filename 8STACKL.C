
//Program 8: Stack using Linked list.

#include<conio.h>
#include<stdio.h>

struct node{

  int d;
 struct node *n;

}*top,*q,*t;

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
  t=top;
  while(t->n!=NULL)
  { printf("%d->",t->d);
    t=t->n;
  }
  printf("%d\n\n",t->d);

}

void push()
{
  create();
  if(top==NULL){
	top = q;
  }
  else{
	q->n=top;
	top = q;
 }
}

void pop(){

	if(top==NULL){
		printf("\nStack Underflow \n");
	} else{
		printf("\n%d is popped out!", top->d);
		top = top->n;
	}
}


void main()
{
  int ch;
  clrscr();

while(ch!=0)
{
  printf("1. Push \n");
  printf("2. pop \n");
  printf("3. Display \n");
  printf("4. Exit -> 0\n\n");
  printf("Choose : ");
  scanf("%d", &ch);

  switch(ch)
  { case 1: push();
	    break;

    case 2: pop();
		break;
	
	case 3: display();
	    break;

    case 0: exit(90);
	    break;

    default:printf("\n\nwrong choice !\n");
  }

}
}