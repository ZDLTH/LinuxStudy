#include "ch7.h"

int main()
{
	void *dlib = dlopen("./libdlib.so", RTLD_NOW);
	if(!dlib)
	{
		printf("dlopen failed!\n");
		exit(-1);
	}
	void(*dfunc) (void) = dlsym(dlib, "dynamic_lib_call");
	if(!dfunc)
	{
		printf("dfunc failed!\n");
		exit(-1);
	}
	dfunc();
	void(*dsumc) (int) = dlsym(dlib, "dsum");
	if(!dsumc)
	{
		printf("dsumc failed!\n");
		exit(-1);
	}
	dsumc(100);
	dlclose(dlib);
	return 0;
}
