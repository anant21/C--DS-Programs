
//Program 9: Queue using Linked list.

#include<conio.h>
#include<stdio.h>

struct node{

  int d;
 struct node *n;

}*front,*q,*rear,*t;

void create()
{
  int data;
  q= (struct node *)malloc(sizeof(struct node));
  printf("\nEnter the data to be entered: ");
  scanf("%d",&data);
  q->d=data;
  q->n=NULL;
}

void del(){

	if(front==NULL && rear==NULL){
		printf("\nQueue is empty\n");
	}
	else{
		printf("%d is deleted!", front->d);
		front=front->d;
		
		if(front==rear){
			front=NULL;
			rear=NULL;
		}
	}
}

void display()
{
  t=front;
  while(t->n!=NULL)
  { printf("%d->",t->d);
    t=t->n;
  }
  printf("%d\n\n",t->d);

}

void insert()
{
 create();

 if(rear==NULL && front==NULL)
     {	rear=q;
		front=q;
	 }
 else{
		 rear->n=q;
		 rear=q;
	 }
}

void main()
{
  int ch;
  clrscr();

while(ch!=0)
{
  printf("1. Insert \n");
  printf("2. Delete \n");
  printf("2. Display \n");
  printf("3. Exit -> 0\n\n");
  printf("Choose : ");
  scanf("%d", &ch);

  switch(ch)
  { case 1: insert();
	    break;

    case 2: del(); break;
	
	case 3: display();
	    break;

    case 0: exit(90);
	    break;

    default:printf("\n\nwrong choice !\n");
  }
}
	getch();
}