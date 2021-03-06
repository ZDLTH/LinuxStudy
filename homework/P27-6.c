#include <stdio.h>
#include <limits.h>
#include<float.h>
//determine ranges of types
int main()
{
	//signed types
	printf("signed short min = %d\n", SHRT_MIN);
	printf("signed short max = %d\n", SHRT_MAX);
	printf("signed int min = %d\n", INT_MIN);
	printf("signed int max = %d\n", INT_MAX);
	printf("signed long min = %ld\n", LONG_MIN);
	printf("signed long max = %ld\n", LONG_MAX);
	printf("signed long long int min = %lld\n", LLONG_MIN);
	printf("signed long long int max = %lld\n", LLONG_MAX);
	//float
	printf("signed float min = %f\n",FLT_MIN);
	printf("signed float max = %f\n",FLT_MAX);
	printf("signed double min = %f\n",DBL_MIN);
	printf("signed double max = %lf\n",DBL_MAX);
	//unsigned types
	printf("unsigned short max = %u\n", USHRT_MAX);	
	printf("unsigned int max = %u\n", UINT_MAX);
	printf("unsigned long max = %lu\n", ULONG_MAX);
	printf("unsigned long long int max = %llu\n", ULLONG_MAX);
	return 0;
}

