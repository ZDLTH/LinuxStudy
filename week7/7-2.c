#include "ch7.h"


int main(int argc, char *argv[])
{
	int i;
	if(argc != 3)
	{
		printf("err\n");
		exit(0);
	}
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	
	printf("result is %d\n", a+b);
	return 0;
}



