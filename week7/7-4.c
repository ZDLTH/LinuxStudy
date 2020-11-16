#include "ch7.h"
static void callback1(void)
{
	printf("--------CallBack1-------\n");
}
static void callback2(void)
{
	printf("--------CallBack2-------\n");
}

static void callback3(void)
{
	printf("--------CallBack3-------\n");
}

static void __attribute__ ((destructor)) after_main()
{
	printf("After Main\n");
}

int main(void)
{
		
	printf("--------Main exit!---------\n");
	atexit(callback1);
	atexit(callback2);	
	atexit(callback3);
	exit(0);
	//_exit(0);
	
	return 0;
}



