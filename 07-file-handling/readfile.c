#include <stdio.h>

int main(){

FILE *pFile=fopen("input.txt","r");
//FILE *pFile=fopen("/root/input.txt","r");
//can use file path
char buffer[1024]={0};

if(pFile==NULL){
	printf("Could not open file\n");
}

while(fgets(buffer,sizeof(buffer),pFile)){
	printf("%s",buffer);
}



fclose(pFile);



	return 0;
}
