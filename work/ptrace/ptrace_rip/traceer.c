#include <stddef.h>   
#include <unistd.h>
#include <stdint.h>   
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

int hah()
{
	printf("ssssxxxx\n");
	return 0x77;
}

void do_int(long *data)
{
	*data = *data + 1;
}

int main()
{   
	long i = 0;
   	while(1)
	{
		printf("My counter: %ld\n", i);
		sleep(1);
		do_int(&i);
	}

    return 0;
}
