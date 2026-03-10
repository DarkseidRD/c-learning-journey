#include <stdio.h>

int main(){

char fruits [][10]={"Apple",
                    "Mango",
                    "Banana",
                    "Coconut",
                    "Lemon"};
int size =sizeof(fruits)/sizeof(fruits[0]);

fruits[0][0]='e';
fruits[0][4]='A';

fruits[1][0]='O';
fruits[1][4]='m';

fruits[2][0]='A';
fruits[2][5]='b';



//for(int i =0;i<4;i++){
for(int i=0;i<size;i++){
	printf("%s\n",fruits[i]);
}



	return 0;
}
