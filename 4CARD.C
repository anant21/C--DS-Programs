
//Program 4: Create a game application which has one box containing 10 (1 to 10 random) cards every
//time user calls for a number the computer search for the card and remove it from the box and shows 
//the remaining cards.

#include<conio.h>
#include<stdio.h>

struct card{

  int d;
  int cn;  //card number
 struct card *n; //pointer to store the address of next card

}*s,*q,*t;

void create()
{ int i;
  //scanf("%d",&data);

  q = (struct card *)malloc(sizeof(struct card));
  q->cn = 1;
  q->d  = 3;
  q->n = NULL;
  s = q;
  t = s;
  for(i = 1; i < 10; i++){

	q = (struct card *)malloc(sizeof(struct card));
	q->cn = i + 1; q->d = 2*i + 11;
	q->n = NULL;
	t->n = q;
	t = t->n;
  }
}


void delcard()
{
  int data, cards = 0;

  printf("\nEnter Random Number (b/w 2 and 31): ");
  scanf("%d", &data);
  t=s;
  //Finding and removing the card
  if(t->d == data){

	s = t->n;
  }

  while(t->n->d!=data){

	t=t->n;
  }
  t->n = t->n->n;

  //Displaying remaining cards

  printf("\n\n Remaining cards\n");
  printf("><><><><><><><><\n\n");

  t=s;
  while(t->n!=NULL)
  { printf("card: %d;\t",t->cn);
    t=t->n; cards++;
  }
  printf("card: %d;\n",t->cn);
  printf("\n\nNumber of cards: %d out of 10\n",cards+1);

getch();
}


void main()
{
  int ch;
  clrscr();
  printf("\t\t\t### RANDOM CARD GAME ###\n");
  printf("\t\t\t    ================\n");
  printf("Let's play!\n\n");
  create();

 do{
  printf("\n1. Select a card \n");
  printf("2. Exit\n\n");
  printf("Choose : ");
  scanf("%d", &ch);

  switch(ch){

	case 1: delcard(); break;

	case 2: exit(0);

	default: exit(0);

  }
} while(1);
getch();
}