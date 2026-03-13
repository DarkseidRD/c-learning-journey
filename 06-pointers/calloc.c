#include <stdio.h>
#include <stdlib.h>

int main(){
//calloc=Contiguous allocaion.
//allocates memory dyamically and sets all
//allocaed bytes to 0.
//malloc() is faster , but calloc() leads to less bugs 
//calloc(#,sizes) 

int number=0;
printf("Enter the number of players: ");
scanf("%d",&number);

int *scores=calloc(number, sizeof(int));

if(scores==NULL){
	printf("Memory allocation failed!\n");
	return 1;
}


for(int i=0;i<number;i++){
    printf("Enter the  scores #%d: ",i+1);
    scanf("%d",&scores[i]);
}

for(int i=0;i<number;i++){
	printf("%d ",scores[i]);
}




free(scores);
scores=NULL;

	return 0;
}
