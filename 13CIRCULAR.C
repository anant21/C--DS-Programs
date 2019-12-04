
//Program 13: Create circular linked list having information about a college 
//and perform insertion at front perform Deletion at end.

#include<conio.h>
#include<stdio.h>

struct node{

  int d;
 struct node *n;

}*s,*q,*t, *last;

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
  while(t->n!=s)
  { printf("%d->",t->d);
    t=t->n;
  }
  printf("%d\n\n",t->d);

}

void addb()
{
 create();

 if(s==NULL)
  { s = q; last = q; q->n = s;   }

 else{

    q->n = s;
    s = q;
    last->n = s;

 }
}

void addl()
{
 create();

 if(s==NULL)
  { s = q; last = q; q->n = s;   }

 else{

     last->n = q;
     q->n = s;
     last = q;
 }
}

void del(){

int data;

printf("\nEnter the data to be deleted: "); scanf("%d",&data);
t = s;
while(t->n->d != data ){

	t=t->n;
}
t->n = t->n->n;

printf("Data: %d Successfully Deleted!\n\nList: ",data);
display();

}

void main()
{
  int ch;
  clrscr();

while(ch!=0)
{
  printf("1. Insert at beginning \n");
  printf("2. Insert at last \n");
  printf("3. Display \n");
  printf("4. Delete \n");
  printf("5. Exit -> 0\n\n");
  printf("Choose : ");
  scanf("%d", &ch);

  switch(ch)
  {
    case 1: addb();
	    break;

    case 2: addl();
	    break;

    case 3: display();
	    break;

    case 4: del();
	    break;

    case 0: exit(90);
	    break;

    default:printf("\n\nwrong choice !\n");
  }

}
}