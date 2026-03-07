#include <stdio.h>

int main(){

int scores[5]={0};

printf("Enter a score: ");
scanf("%d",&scores[0]);

printf("Enter a score: ");
scanf("%d",&scores[1]);

printf("Enter a score: ");
scanf("%d",&scores[2]);

printf("Enter a score: ");
scanf("%d",&scores[3]);

printf("Enter a score: ");
scanf("%d",&scores[4]);

printf("\n");

for(int i=0;i<5;i++){
	printf("%d ",scores[i]);
}

printf("\n\n");

	return 0;
}
