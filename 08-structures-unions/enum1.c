#include <stdio.h>

enum Day{
	SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY
};


int main(){
//enum=A user-difined deta type that consists
//of a set of named integer constants.
//Benefits: Replace number with readable names
//EX:--->
//SUNDAY=0;
//MONDAY=1;
//TUESDAY=2;

enum Day today=MONDAY;

printf("%d",today);



	return 0;
}
