#include "my.h"


int main()
{	
	
	while (1)
	{
		printf("choose function: \n1.add recorder\n2.view recorders\n3.exit\n");
		printf("your input: ");

		int c;
		scanf("%d", &c);
		getchar();
		int count = 0;
		recorder* r;
		char flag = 1;
		switch (c)
		{
		case 1: 
			
			do
			{
				r = input();

				if (randdat(r))
				{
					save(r);
				}
				printf("continue?(y/n): ");
				getchar();
				scanf("%c", &flag);
			} while (c == 'y');
				
				break;
		case 2: 
			r = getRecorders();
			count = getRecorderCount();
			output(r, count);
			printf("Whether to sort?(y/n): ");
			scanf("%c", &flag);

			if (flag == 'y')
			{
				mysort(r, count);
				printf("after sort\n ");
				output(r, count);
			}
			break;
		case 3:
			exit(0);

			break;
		default:
			break;
		}

	}

	return 0;	
}
