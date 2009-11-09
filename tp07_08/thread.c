/*
 * thread.c - simple demonstration of mutual exclusion problems
 */

#include <stdio.h>
#include <pthread.h>


int Value = 10;

void* thr_func(void* ptr)
{
   if (Value >= 10) {
      Value -= 10;
   }
   return NULL;
}

int main()
{
   pthread_t t1,t2;
   
   if (pthread_create(&t1, NULL, thr_func, NULL) != 0) {
      printf("Error creating thread.\n");
      return -1;
   }
   if (pthread_create(&t2, NULL, thr_func, NULL) != 0) {
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

   printf("Value=%d\n",Value);
   return 0;
}
