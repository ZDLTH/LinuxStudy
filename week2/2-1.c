#include "my.h"
int main()
{
	int ret;

	ret = write(1, "hello world!\n",13);

	exit(0);
	return 0;
}	
