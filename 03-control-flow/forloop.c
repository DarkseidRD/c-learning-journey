#include <stdio.h>
//#include <windows.h>//windows
#include <unistd.h>//mac,linux

int main(){
//for loop=Repeat some code a limited # of time
//for(Intitalization;Condition;Update)

//for (int i =0; i<=10 ;i++){
//	printf("%d\n",i);
//}

//for (int i =10; i>=0 ;i--){
//printf("%d\n",i);
//}


//for (int i =0; i<=10 ;i+=2){
//printf("%d\n",i);
//}

//for (int i =10; i>=0 ;i-=2){
//printf("%d\n",i);
//}

for (int i=10 ;i>=0;i--){
    sleep(1);
	printf("%d\n",i);
}


printf("HAPPY NEW YEAR!!\n");

 
	return 0;
}
