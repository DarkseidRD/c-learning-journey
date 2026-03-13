#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>

int main(){
//DIGITEL CLOCK

time_t rawtime=0; //jan 1 1970(Epoch)
struct tm *ptime=NULL;
bool isRunning=true;

while(isRunning){

    time(&rawtime),
    ptime=localtime(&rawtime);

    printf("\r%d:%d:%d",ptime->tm_hour,ptime->tm_min,ptime->tm_sec);
    
    
	sleep(1);
}


	return 0;
}
