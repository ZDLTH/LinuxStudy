#include "ch5.h"

int main()
{	
	char buf[20];
	int ret;
	FILE *fp = fopen("./temp.txt", "w+");

	if(!fp)
	{
		printf("Error to create file!\n");
		exit(-1);
	}
	
	ret = fwrite("123", sizeof("123"), 1, fp);

	printf("We write %d byte\n", ret);	
	fseek(fp, 0, SEEK_SET);
	memset(buf, 0, sizeof(buf));
	ret = fread(buf,1,1,fp);
	fseek(fp, 0, SEEK_END);
	printf("We read %s, ret is%d\n", buf, ret);
	ret = fwrite("456", sizeof("456"), 1, fp);


	fclose(fp);
	return 0;
	
	
}

