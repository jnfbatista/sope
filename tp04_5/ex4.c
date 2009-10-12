#include <signal.h>
#include <stdlib.h>
#include <stdio.h>


void handler_tstp(int sig) {
	printf(">>> received %d\n", sig);
	    }

void  handler_int(int sig) {
	printf("recieved %d\n",  sig);
}

int main( void ) {
	int p ;

	p = getpid();

	printf("PID: %d\n", p);

        signal(SIGTSTP, handler_tstp);
        signal(SIGINT, handler_int);
	while(1) {
		pause();
		
		}	
}
