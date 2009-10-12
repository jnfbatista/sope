#include <stdio.h>
#include <signal.h>

void  handler(int sig) {
	printf("recieved %d\n",  sig);
}
int main(int arcg, char *argv[]) {
	int a, b, c;

        signal(SIGUSR1, handler);
        signal(SIGINT, handler);

	if ((a = fork()) == -1 ){
		perror("fork");
		}

	if (a == 0) {
		b = fork();




	}

	while(1) {
	}

}
