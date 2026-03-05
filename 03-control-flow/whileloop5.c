#include <stdio.h>
#include <stdbool.h>

int main(){
//also you can 'do..while'
bool isRunning=true;
char response='\0';

while(isRunning){
	printf("You are playing a game\n");
	printf("Would you like to continue (Y=Yes, N=No): ");
	scanf(" %c",&response);

if(response !='Y' && response !='y'){
	isRunning= false;
      }
}


printf("You exit the game");

	return 0;
}
