

//Program 5: Create a game application which has one box containing 10 (1 to 10 random) cards every
//time user calls for a number the computer search for the card and remove it from the
//box and shows the remaining cards.

#include <stdio.h>
#include <conio.h>

int bus[100];

void booking(int ch){

	int  i, n = 55, pass = 0, seat, count = 0;

if(ch == 1){
	printf("\nEnter the seat no.: ");
	scanf("%d", &seat);


	for (i = 1; i <= n; i++){

	     if(seat == i && bus[i] != 1){

			pass++;
			bus[i] = 1;
			printf("\nYour seat %d has booked succesfully, thank you!",i);
	     }        //1 : Booked, 0: Available

	     else if(seat == i && bus[i] == 1){

			printf("\nNot available, check Seat Availability!");

	     }

	}
getch();
}

	//--------------Availability check-------------------------
if(ch == 2){

	printf("\t\t\t ## SEAT AVAILABILITY ##\n\n");
	printf("Seat No. \t Status\n");
	printf("-------- \t -------\n\n");

	for (i = 1; i <= n; i++){

		if(bus[i] == 1)
		{ count++;  printf(" %d \t\t Occupied\n", i);}

	}
	printf("\n\nAvailable seats: %d",55 - count);

}
getch();
}


void main(){

      int c;

      do{
	clrscr();
	printf("\t\t\t### Welcome to Online Bus Service ###");

	printf("\n\n\n");
	printf("1. Book your seat\n");
	printf("2. Seat Availability\n");
	printf("3. Exit\n\n");
	printf("Choice: ");
	scanf("%d", &c);

	switch(c){

		case 1: booking(c); break;

		case 2: booking(c); break;

		case 3: exit(0); break;

		default: printf("\nWrong choice !!"); getch(); clrscr(); main(); break;

	}

} while (1);

getch();
}
