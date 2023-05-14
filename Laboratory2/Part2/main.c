#include <stdio.h>
#include <pthread.h>
#include <sys/neutrino.h>
#include <sched.h>
#include <process.h>
#include <unistd.h>
#include <dlfcn.h>
#include "mylib.h"

pthread_t thread_id1;
pthread_t thread_id2;
int counter;
pthread_mutex_t mutex;

struct sched_param param1 = {6};
struct sched_param param2 = {12};

int main(void)
{

  printf("Program threads PID %d \n", getpid());
  pthread_mutex_init(&mutex, NULL);

  pthread_setschedparam(thread_id1, SCHED_RR, &param1);
  pthread_setschedparam(thread_id2, SCHED_RR, &param2);

  pthread_create(&thread_id1, NULL, long_thread1, NULL);
  pthread_create(&thread_id2, NULL, long_thread2, NULL);

  pthread_join(thread_id1, NULL);
  pthread_join(thread_id2, NULL);

  pthread_mutex_destroy(&mutex);
  printf("Counter is equal: %d \n", counter);

  return 0;
}
