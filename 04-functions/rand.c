#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

srand(time(NULL));

//printf("%d",rand);

int min=50;
int max=100;

int random1= (rand()%(max - min+1)) +min;
int random2= (rand()%(max - min+1)) +min;
int random3= (rand()%(max - min+1)) +min;

printf("%d %d %d",random1 ,random2,random3);


	return 0;
}
