#include "../ch8.h"

int main()
{

	int a[8] = {4,3,1,7,9,5,6,11};
	
	int i = 0;
	printf("before:");
	for(i = 0; i < 8; i++)
	{
		printf("%d  ", a[i]);
	}

	printf("\n");

	void *fpt = dlopen("./libdlib.so", RTLD_NOW);
	if(!fpt)
	{
		printf("dlopen failed!\n");
		exit(1);
	}
	void (*fp)(int *, int) = dlsym(fpt, "mysort");
	if(!fp)
	{
		printf("Dlsym Failed");
	}
	fp(a, 8);

	printf("after:");
	for(i = 0; i < 8; i++)
	{
		printf("%d  ", a[i]);
	}
	printf("\n");
	dlclose(fpt);
}
