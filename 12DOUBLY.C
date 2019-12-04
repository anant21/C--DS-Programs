
//Program 12: Create doubly linked list with nodes having information about an employee and perform
//Insertion at front of doubly linked list and perform deletion at the end of that doubly
//linked list.

#include<conio.h>
#include<stdio.h>

struct node{

  int d;
 struct node *n, *p;

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

void insbeg()
{
 create();

 if(s==NULL)
     s = q;

 else{
     q->n = s; s->p = q;
     s = q;
 }
}

void inslast()
{
  create();

  if(s == NULL)
      s = q;
  else
  {  t = s;
     while(t->n!=NULL)
     {
	t = t->n;
     }
      t->n = q;
      q->p = t;
  }

}

void del(){
int data;

printf("\nEnter the data to delete: ");
scanf("%d", &data);

t=s;
while(t->n->d!=data){
t=t->n;
}

t->n = t->n->n;
t->n->n->p = t->p;

printf("\n Data: %d Deleted successfully!\n\nDoubly Linked List: ",data);
display();
getch();
}

void main()
{
  int ch;
  clrscr();

  printf("\t\t\t### Doubly Linked List ###\n\n");

while(ch!=0)
{
  printf("1. Add at Beginning \n");
  printf("2. Add at last \n");
  printf("3. Delete \n");
  printf("4. Display \n");
  printf("5. Exit -> 0\n\n");
  printf("Choose : ");
  scanf("%d", &ch);

  switch(ch)
  { case 1: insbeg();
	    break;

    case 2: inslast();
	    break;

    case 3: del();
	    break;

    case 4: display();
	    break;

    case 0: exit(90);
	    break;

    default:printf("\n\nwrong choice !\n");
  }

}
}