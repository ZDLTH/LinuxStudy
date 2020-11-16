#include "ch8.h"



int main()
{


	int *tt  = (int *)malloc(sizeof(int)*2) ;
	int c = 1;
	while(tt!=NULL)
	{
		free(tt);
		tt = (int *)malloc(sizeof(int)*c++*1024*1024);
		
	}
	
	
	printf("max mb is %d\n", c);
	return 0;	
}
