#include <stdio.h>
#include <pthread.h>

int value = 0;
pthread_mutex_t mutex;

void* thr_inc_even(void* ptr) {

	while( value < 20) {
		if(value % 2 == 0 ) {
			pthread_mutex_lock(&mutex);
			value++;
			printf("[E] counter = %d\n", value);
			pthread_mutex_unlock(&mutex);
		}
	}

	return NULL;
}

void* thr_inc_odd(void* ptr) {
	while( value < 20) {
		if(value % 2 != 0 ) {
			pthread_mutex_lock(&mutex);
			value++;
			printf("[O] counter = %d\n", value);
			pthread_mutex_unlock(&mutex);
		}
	}
	return NULL;
}


int main(int argc, char* argv[]) {

	pthread_t t1,t2;

	if (pthread_create(&t1, NULL, thr_inc_even, NULL) != 0) {
		printf("Error creating thread.\n");
		return -1;
	}
	if (pthread_create(&t2, NULL, thr_inc_odd, NULL) != 0) {
		printf("Error creating thread.\n");
		return -1;
	}

	if(pthread_join(t1, NULL) != 0) {
		printf("Error joining thred.\n");
		return -1;
	}
	if(pthread_join(t2, NULL) != 0) {
		printf("Error joining thred.\n");
		return -1;
	}

	return 0;
}

