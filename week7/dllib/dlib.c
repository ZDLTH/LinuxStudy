#include "../ch7.h"


void dynamic_lib_call(void)
{
	printf("Dynamic lib is called!\n");
}
void dsum(int max)
{
	int i = 0;
	int sum = 0;
	for(i = 0; i <= max; i++)
	{
		sum+=i;
	}
	printf("sum is %d\n", sum);
}
