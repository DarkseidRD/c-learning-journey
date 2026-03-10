#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
//QUIZ GAME

char questions[][100]={"~•What is the largest planet in the solar system?",
                       "~•What is the hottest planet?",
                       "~•What planet has the most moons?",
                       "~•Is the Earth flat"};

                       
char options[][100]={"A.Jupitor\nB.Saturn\nC.Uranus\nD.Neptume",
                     "A.Mercury\nB.Venus\nC.Earth\nD.Mars",
                     "A.Earth\nB.Mars\nC.Jupitor\nD.Saturn",
                     "A.Yes\nB.No\nC.Maybe \nD.Sometimes" };
char answerKey[]={'A','B','D','B'};

int questionCount=sizeof(questions)/sizeof(questions[0]);

char guess='\0';
int score=0;


printf("=====QUIZ GAME=====\n\n");

for(int i=0;i<questionCount;i++){
	printf("%s\n",questions[i]);
	printf("%s\n",options[i]);
	printf("Enter your option: ");
	scanf(" %c",&guess);

guess=toupper(guess);


	if (guess==answerKey[i]){
		printf("CORRECT!\n");
		score++;
	}
	else{
		printf("WRONG!\n");
	}
	printf("\n");
}




printf("\nYour score is %d out of %d points\n",score,questionCount);

	return 0;
}
