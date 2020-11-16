#include "../ch8.h"

void dynamic_lib_fun_call(void)
{
	printf("Dynamic Lib Fun Called!\n");
	
}

void mysort(int *a, int l)
{
	int i, j;
	 for (i = 0; i < l-1; i++)
        {
      	for (j = 0; j < l - i-1; j++) 
        	{
            	if (a[j] > a[j + 1])
            		{
               		a[j + 1] ^= a[j];
                		a[j] ^= a[j + 1];
                		a[j + 1] ^= a[j];
           		}
       		}
	}
}
