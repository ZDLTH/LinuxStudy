#include "ch2.h"
int main()
{
	FILE *fp;
	int fd;
	fd = open("./test1.txt", O_RDWR, 644);
	fp = fdopen(fd,"w+");
	fprintf(fp,"3-9 test data %s", "hello world");
	fclose(fp);
	close(fd);
	return 0;
}
