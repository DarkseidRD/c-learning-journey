#include <stdio.h>

int getMax(int x, int y){
	if(x >= y){
		return x;
	}
	else{
		return y;
	}
}

int main(){
//return = return a value back to where you call a function

 int max=getMax(2,3);

 printf("%d\n",max);



	return 0;
}
