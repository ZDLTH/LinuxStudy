#include "my.h"

char* hd[43] = {"133","149","153","173","177","180","181","189","199","130",
"131","132","145","155","156","166","171","175","176","185","186","166"
,"134","135","136","137","138","139","147","150","151","152","157","158","159","172","178","182","183","184","187","188","198"};

recorder* input()
{
	recorder *r;
	r = (recorder*)malloc(sizeof(recorder));
	memset(r, 0, sizeof(recorder));
	printf("input id:");
	scanf("%d", &r->id);
	printf("input name:");
	scanf("%s", &r->name);
	printf("input htel:");
	scanf("%s", &r->htel);
	printf("input tel:");
	scanf("%s", &r->tel);
	return r;
}

int save(recorder *r)
{
	FILE* fp;
	if((fp = fopen("./user.dat", "a+")) == NULL)
	{
		fp = fopen("./user.dat", "w");
	}

	fwrite(r,sizeof(recorder), 1, fp);
	fclose(fp);	
	return 1;
}


int upSort(const recorder* a, const recorder* b)
{

	if (strlen(a->name) > strlen(b->name))
	{
		return 1;
	}
	else if (strlen(a->name) < strlen(b->name))
	{
		return -1;
	}
	else
	{
		int ret = strcmp((char*)a->name, (char*)b->name);
		return (ret < 0) ? -1 : 1;
	}

}

int downSort(const recorder* a, const recorder* b)
{

	if (strlen(b->name) > strlen(a->name))
	{
		return 1;
	}
	else if (strlen(b->name) < strlen(a->name))
	{
		return -1;
	}
	else
	{
		int ret = strcmp((char*)b->name, (char*)a->name);
		return (ret < 0) ? -1 : 1;
	}

}
void mysort(recorder* r, int count)
{	
	
	printf("Please select the sorting method: 1. Ascending order by name 2. Descending order by name\n");
	int way;
	scanf("%d", &way);

	switch (way)
	{
	case 1:
		qsort(r, count, sizeof(recorder), upSort);
		break;
	case 2:
		qsort(r, count, sizeof(recorder), downSort);
		break;
	default:
		break;
	}


}


void output(recorder *r, int count)
{
	printf("userid     name      htel        tel\n");
	int i;


	for(i = 0; i < count ; i++)
	{
		printf(" %-10d", r[i].id);
		printf("%-10s", r[i].name);
		printf("%-12s", r[i].htel);
		printf("%-12s\n", r[i].tel);

	}
	
}


recorder* getRecorders()
{
	FILE* fp = fopen("user.dat", "r+");

	int count = getRecorderCount();

	recorder* r;
	r = (recorder*)malloc(sizeof(recorder) * count);

	memset(r, 0, sizeof(recorder) * count);

	fread(r, sizeof(recorder), count, fp);

	fclose(fp);
	return r;
}

int getRecorderCount()
{
	int count = 0;
	FILE* fp = fopen("user.dat", "r+");

	recorder rBuf;
	while (fread(&rBuf, sizeof(recorder), 1, fp) != 0)
	{
		count++;
	}
	fclose(fp);
	return count;
}

int randdat(recorder* r)
{

	int i;
	int  flag;
	if (r->id < 0)
	{
		printf("id must be in 0-4294967295\n");
		flag = 0;
	}

	if (strlen(r->name) > 8)
	{
		printf("The name must be within 8 characters\n");
		flag = 0;
	}

	if (r->name[0] < 'A' || r->name[0] > 'Z' )
	{
		printf("Capitalize the first letter of  name\n");
		flag = 0;
	}
	for (i =1; i < strlen(r->name); i++)
	{
		if (r->name[i] < 'a' || r->name[i] > 'z')
		{
			printf("The letter after the first letter should be lowercase\n");
			break;
		}
	}

	if (strlen(r->htel) > 12)
	{
		printf("The htel must be within 12 characters\n");
		flag = 0;
	}

	if (strstr(r->htel, "-") == NULL)
	{
		printf("The format of htel is not correct, it required \"Area code-landline number\"  \n");
		flag = 0;
	}

	if (strlen(r->tel) != 11)
	{
		printf("The tel must be  11 characters\n");
		flag = 0;
	}


	char c[] = "111";
	int a = 0;
	strncpy(c, r->tel, 3);
	for (i = 0; i < sizeof(hd) / sizeof(char*); i++)
	{
		if (strcmp(c, hd[i]) == 0)
		{
			a = 1;
			break;
		}
	}

	if (a != 1)
	{

		printf("Please input the right number begin with 151 137 136 etc\n");
		flag = 0;
	}

	return flag == 0 ? 0 : 1;
	

}
