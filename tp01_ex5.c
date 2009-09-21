#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[], char * envp[]) {
	int i = 0;

	for (i = 0; i < argc; i++) {
		printf("\n- %s\n", argv[i]);

	}

	char * x = getenv("HOME");

	printf("\nEnv: %s" , x);

	return 0;
}
