#include <stdio.h>

//int result=0; //GLOBAL SCOPE (this can be hard to debug)

int add(int x , int y){
	int result =x +y;
	//result=x+y;
	return result;
}

int subtract(int x , int y){
    int result =x -y;
    //result=x-y;
    return result;
}


int main(){
//variable scope =Refers to where a variable is
// recognized and accesible
/// variable can share the same name if 
//they're in different scopes{}

int x=0;//LOCAL
int y=0;

printf("Enter num1: ");
scanf("%d",&x);

printf("Enter num2: ");
scanf("%d",&y);

//you can use: int result = add(x,y);
int result =subtract(x,y);
//result=subtract(x,y);

printf("%d\n",result);



	return 0;
}
