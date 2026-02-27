#include <stdio.h>

int main(){

int choice=0;
float pounds=0.0f;
float kilograms=0.0f;

printf("-----Weight Conversion Calculator-----\n");
printf("\n");


printf("1.Kilograms to Pounds\n");
printf("2.Pounds to kilograms\n");
printf("\n");

printf("Enter your choice (1 or 2): ");
scanf("%d",&choice);

//------------------------(this make easy to see coding)

if(choice ==1){
	printf("Enter the weight in Kilograms: ");
    scanf("%f",&kilograms);
    pounds=kilograms*2.20462;
    printf("\n");
    printf("%.2f kilograms is equal to %.2f pounds\n",kilograms,pounds);

    
}



//-------------------------

else if(choice ==2){
	printf("Enter the weight in Pounds: ");
    scanf("%f",&pounds);
	kilograms=pounds/2.20462;
	printf("\n");
    printf("%.2f pounds is equal to %.2f kilograms\n",pounds,kilograms);

	
} 

//------------------------

else{
	printf("Invaild choice!!\n");
}







	return 0;
}
