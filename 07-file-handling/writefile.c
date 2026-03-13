#include <stdio.h>

int main(){

FILE *pFile= fopen("output.txt","w");
//FILE *pFile= fopen("/root/output.txt","w");
//you can any where write 

char text[]="BOOTY BOOTY \nROCKIN' EVERYWHERE!!\n";

if(pFile==NULL){
	printf("Error opening file\n");
	return 1;
}

fprintf(pFile,"%s",text);

printf("File was written successfull!\n");

fclose(pFile);





	return 0;
}
