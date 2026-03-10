#include <stdio.h>

int main(){

int number=0;
printf("Enter number: ");
scanf("%d",&number);

printf("%d is %s\n",number,(number%2==0)? "Even":"Odd");



	return 0;
}
