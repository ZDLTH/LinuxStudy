#include "my.h"
int main()
{
	int ret;
	printf("2-2 i running!\n");
	ret = write(1, "hello world!\n",13);
	sleep(100);
	exit(0);
	return 0;
}	
