#include <stdio.h>
#include <stdbool.h>

void hello(char name[] , int age);//function prototype
bool ageCheck(int age);


int main(){
//function prototypes= Provide the compiler w/ information 
//about a function's : name,return type and parametors before 
//its actual definetion.Enables type chacking and allows 
//functions to be ised before they're defined
//Improve readbility ,organization and helps prevents errors.

hello("Superman",26);

if(ageCheck(26)){
	printf("You are old enough to work at krusty krab\n");
}
else{
	printf("You must be +16 to work at the krusty krab\n");
}


	return 0;
}

void hello(char name[] , int age){
    printf("Hello %s\n",name);
    printf("You are %d years old\n",age);
}

bool ageCheck(int age){
	return age >= 16;
}
