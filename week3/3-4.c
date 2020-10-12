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
	fwrite(buf,1,sizeof(buf), fp);
	fclose(fp);
	return 0;
}
