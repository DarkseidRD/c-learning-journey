#include <stdio.h>

int main(){

int age=25;
int *pAge = &age;
//* =deference operator 

printf("%p\n",&age);
printf("%p\n",pAge);
//same address when output

	return 0;
}
