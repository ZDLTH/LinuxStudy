#include "ch7.h"

int main(int argc, char* argv[], char* env[])
{
	
	extern char** environ;
	int i = 0;
	for(i = 0; environ[i] != NULL; i++)
	{
		printf("environ[%d] = %s\n", i, environ[i]);
	}
	for(i = 0; env[i] != NULL; i++)
	{
		printf("evn[%d] = %s\n", i, env[i]);
	}
	printf("PATH = %s\n", getenv("PATH"));
	
	return 0;
}



