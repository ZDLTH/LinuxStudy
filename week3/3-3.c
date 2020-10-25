#include "ch2.h"

int main()
{
	FILE *fp;
	char buf[80];
	memset(buf, 0, sizeof(buf));
	if((fp = fopen("./test1.txt","w")) == NULL)
	{
		perror("open filed\n");
		return 0;
	}
	fgets(buf, sizeof(buf),stdin);
	printf("content is %s", buf );
	fwrite(buf,sizeof(buf),1, fp);
	fclose(fp);
	return 0;
}
