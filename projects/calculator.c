#include <stdio.h>

int main(){
 //Basic calculator program using switches,if

 char operator='\0';
 double num1=0.0;
 double num2=0.0;
 double result=0.0;


printf("Enter the frist number: ");
scanf("%lf",&num1);

printf("Enter the operator (+ - * /): ");
scanf(" %c",&operator); //clear \n  from input buffer

printf("Enter the second number: ");
scanf("%lf",&num2);

switch(operator){

	case '+':
	  result=num1 + num2;
	  break;

    case '-':
       result=num1 - num2;
        break;

    case '*':
       result=num1 * num2;
        break;

    case '/': //so there problem num1/num2 when num2=0 Reslut=inf ,so fix this use if statement
     if(num2==0){
     	printf("You can't divide by Zero!!\n");
     }
     else{
     	result=num1 / num2;
     }
       break;

      
    default:
       printf("Invaild operator\n");
	
}

printf("Result: %.4lf\n",result);


	return 0;
}
