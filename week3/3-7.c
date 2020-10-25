#include "ch2.h"

int main(int argc, char *argv[])
{
	FILE *fp;
	if((fp = fopen("./test1.txt","w")) == NULL)
	{
		perror("open filed\n");
		return 0;
	}

	for(int i = 1; i < argc; i++)
	{
	
		fprintf(fp,"%s", argv[i]);
		
	}

	fclose(fp);
	return 0;
}
