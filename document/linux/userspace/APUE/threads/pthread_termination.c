#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <signal.h>
#include <errno.h>
#include <pthread.h>

/*
1.	The thread can simply return from the start routine. The return value is the thread's exit code.
2.	The thread can be canceled by another thread in the same process.
3.	The thread can call pthread_exit.
*/

/*
cr7@cr7-virtual-machine:~/test/APUE/threads$ ./pthread_cleanup_push 
thread 3 exiting
thread 2 exiting
thread 1 cancel
thread 1 exit code -1   //PTHREAD_CANCELED
thread 2 exit code 2
thread 3 exit code 3
*/
void *thr_fn1(void *arg)
{
	printf("thread 1 cancel\n");
	sleep(2);
	return((void *)1);
}

void *thr_fn2(void *arg)
{
	printf("thread 2 exiting\n");
	pthread_exit((void *)2);
}

void *thr_fn3(void *arg)
{
	printf("thread 3 exiting\n");
	return((void *)3);
}

int main(void)
{
	int         err;
	void        *tret;
	pthread_t   tid1, tid2, tid3;

	err = pthread_create(&tid1, NULL, thr_fn1, NULL);
	if (err != 0)
	{
		perror("can't create thread 1:");
		exit(1);
	}
	err = pthread_create(&tid2, NULL, thr_fn2, NULL);
	if (err != 0)
	{
		perror("can't create thread 2");
		exit(1);
	}

	err = pthread_create(&tid3, NULL, thr_fn3, NULL);
	if (err != 0)
	{
		perror("can't create thread 2");
		exit(1);
	}
	
	pthread_cancel(tid1);

	err = pthread_join(tid1, &tret);
	if (err != 0)
	{
		perror("can't join with thread 1");
		exit(1);
	}
	printf("thread 1 exit code %d\n", (int)tret);

	err = pthread_join(tid2, &tret);
	if (err != 0)
	{
		perror("can't join with thread 2");
		exit(1);
	}
	printf("thread 2 exit code %d\n", (int)tret);

	err = pthread_join(tid3, &tret);
	if (err != 0)
	{
		perror("can't join with thread 3");
		exit(1);
	}
	printf("thread 3 exit code %d\n", (int)tret);
}
  
