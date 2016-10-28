#include "atomic.h"

atomic_t  wx;

void * Run1(void * para)
{
    int i = 0;
    while(i < 10000000)
    {
			i++;
			// if no loock, there will be not right in the 
			// final value.
			atomic_inc(&wx);
    }                        
    printf("A last value in 1 thread %d\n",  atomic_read(&wx));
 
}

void * Run2(void * para)
{
    int i = 0;
    while(i < 10000000)
    {
			i++;
			// if no loock, there will be not right in the 
			// final value. 
			
			atomic_add(&wx, 2);
			//printf("value in 2 thread %d\n", wx);
    }             
    printf("A last value in 2 thread %d\n", atomic_read(&wx));   
        
}
int main()
{
	int ret = 0;
	pthread_t id1;
	pthread_t id2;
	
	atomic_init(&wx);
	
	ret = pthread_create(&id1, NULL, Run1, NULL);
	assert(ret == 0);
	
	ret = pthread_create(&id2, NULL, Run2, NULL);
	assert(ret == 0);

  	pthread_join(id1, NULL);
  	pthread_join(id2, NULL);
                           
	sleep(1);
	atomic_set(&wx, -100);
	printf("value in main %d\n",  atomic_add_return(&wx, 10));
	return 0;
}
