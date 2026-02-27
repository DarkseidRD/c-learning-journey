#include <stdio.h>

int main(){

int dayOfweek=0;
printf("Enter the day of week (1-7): ");
scanf("%d",&dayOfweek);

switch(dayOfweek){

   case 1:
   printf("It is Monday\n");
   break;

   case 2:
   printf("It is Tuesday\n");
   break;


   case 3:
   printf("It is Wednesday\n");
   break;

   case 4:
   printf("It is Thursday\n");
   break;

   case 5:
   printf("It is Friday\n");
   break;

   case 6:
   printf("It is Saturday\n");
   break;

   case 7:
   printf("It is Sunday\n");
   break;


   default:
   printf("Please only enter a number (1-7)\n");
	
}
//also can use char example ---> char dayOfweek='';
//printf("Enter the dayOfweek (M,T,W,H,F,S,U,): ");  and scanf("%c",&dayOfweek);
//switch(dayOfweek){
//
// 	case 'M':
//   printf("It is Monday");
//   break;
//  
//  case 'T':
//   printf("It is Tuesday");
//   break;
// }

	return 0;
}
