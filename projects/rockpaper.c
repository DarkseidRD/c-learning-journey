#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice,int computerChoice );

int main(){
//ROCK PAPER SCISSORS GAME
srand(time(NULL));

printf("----ROCK PAPER SCISSORS----\n");
printf("\n");

int userChoice=getUserChoice();
int computerChoice=getComputerChoice();

switch(userChoice){
	case 1:
	printf("You chose ROCK\n");
	break;

	case 2:
	printf("You chose PAPER\n");
	break;

	case 3:
	printf("You chose SCISSORS\n");
	break;    
}

switch(computerChoice){
    case 1:
    printf("Computer chose ROCK\n");
    break;

    case 2:
    printf("Computer chose PAPER\n");
    break;

    case 3:
    printf("Computer chose SCISSORS\n");
    break;
	
}

checkWinner(userChoice,computerChoice);



	return 0;
}

int getComputerChoice(){
	return  (rand() % 3)+1;
}

int getUserChoice(){
	int choice =0;

	do{
		printf("Choose an option\n");
		printf("1.ROCK\n");
		printf("2.PAPER\n");
		printf("3.SCISSOR\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);

        printf("\n");
		
	}while (choice <1 || choice >3);

	return choice;
}

void checkWinner(int userChoice,int computerChoice){
	if(userChoice == computerChoice){
	    printf("\n");
		printf("It's TIE!\n");
		printf("\n");
	}

	else if((userChoice==1&& computerChoice==3)||
	(userChoice==2&& computerChoice==1)||
	(userChoice==3&& computerChoice==2)){
	    printf("\n");
		printf("You WIN!!\n");
		printf("\n");
	}


	else{
	    printf("\n");
		printf("You LOSE!!\n");
		printf("\n");
	}
}
