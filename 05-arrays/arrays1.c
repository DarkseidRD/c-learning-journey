#include <stdio.h>

int main(){
//array =A fixed size collection of elements of the 
//same deta type 
//(similar to a variable, but it holds more than 1 value)


int numbers[]={10,20,30,40,50};
char grades[]={'A','B','C','D','F'};
char names[]="Dark D";

//printf("%d",number[0]);

printf("%d\n",sizeof(numbers));
printf("%d\n",sizeof(numbers[0]));


for(int i=0;i<5;i++){
	printf("%d",numbers[i]);
}

printf("\n");

for(int j=0;j<5;j++){
	printf("%c",grades[j]);
}

printf("\n");

for(int k=0;k<7;k++){
	printf("%c",names[k]);
}

printf("\n");

	return 0;
}
