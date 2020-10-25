#include "ch3.h"

int main()
{
	int fd = open("test.dat", O_CREAT|O_WRONLY,0644);
	
	for(int i = 0; i < 2; i++)
	{
		char buf = 'A';
		
		srand(time(0));

		buf = buf + rand()%25;

		printf("write2 : %c\n", buf);
		write(fd, &buf, 1);
		lseek(fd, 10, SEEK_SET);
		sleep(20);


	}	
	close(fd);
	
}
