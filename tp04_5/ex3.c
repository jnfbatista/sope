#include <signal.h>
#include <stdlib.h>
#include <stdio.h>

static int state = 0;

void handler(int sig) {
	printf(">>> received %d\n", sig);
	    state=!state;
	    }

int main( void ) {
        signal(SIGALRM, handler);
	while(1) {
		if(state) {
			printf("WAKE UP!!\n" );
		}
		else {
			printf("Snoozing now...\n");
                }
		alarm(5);
		pause();
		}
		}	


