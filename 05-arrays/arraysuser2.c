#include <stdio.h>

int main(){

int scores[5]={0};

for(int i=0;i<5;i++){
	printf("Enter a score: ");
	scanf("%d",&scores[i]);
}


printf("\n");

for(int i=0;i<5;i++){
    printf("%d ",scores[i]);
}

printf("\n\n");

    return 0;
}
