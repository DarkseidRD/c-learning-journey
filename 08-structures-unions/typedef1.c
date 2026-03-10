#include <stdio.h>

typedef int number;

int main(){
//typedef=reversed keyword that gives an existing
//datatype a "nickname" helps simplify complex types
//and improves code readability
//typedef existing_type new_name;

number x=4;
number y=3;
number z=x+y;

printf("%d\n",z);


	return 0;
}
