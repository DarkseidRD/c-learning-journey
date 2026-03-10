#include <stdio.h>

int main(){

int age=0;
printf("Enter your age: ");
scanf("%d",&age);

printf("%s\n\n",(age>18)? "You are Adult":"You are Child");

int hours=12;
int minutes=30;

printf("%02d:%02d %s\n",hours,minutes,(hours<12)? "AM":"PM");

	return 0;
}
