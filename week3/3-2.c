#include "ch2.h"

int main()
{
	FILE *fd;
	fd = fopen("./test1.txt","r+");
	char name[10] = "wzb";	
	int flag = fscanf(fd, "%s\n",name);
	printf("%d%s\n", flag,name);
	printf("file fd = %d\n", fd->_fileno);
	fclose(fd);
	return 0;
}
