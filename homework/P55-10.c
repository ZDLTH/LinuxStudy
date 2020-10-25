#include<stdio.h>
#include <stdlib.h>
#include<string.h>

char* readFile(char* filename, int index);

void saveFIle();
int main()
{
	saveFIle();
	char* i;
	i = readFile("test.txt", 2);
	printf("item is %s\n", i);
	return 0;
}

char* readFile(char *filename, int index)
{
	FILE* f;

	if ((f = fopen(filename, "rb")) == NULL) 
	{
		printf("open err");
		exit(0);
	}

	int length = 0;
	fread(&length, sizeof(int),1, f);

	if (index > length)
	{
		printf("out of file length");
	}

	int place = 0;
	int itemSize = 0;
	int i;
	for (i = 0; i < index; i++)
	{
		int size = 0;

		fread(&size, sizeof(int), 1, f);
		place += size;
		itemSize = i == index - 1 ? size : 0;
	}
	fseek(f, (length+1)*sizeof(int), SEEK_SET);

	char *item;
	item = malloc(itemSize);
	memset(item, 0, itemSize);

	fread(item, itemSize, 1, f);

	fclose(f);
	return item;


}

void saveFIle()
{

	FILE* f = fopen("test.txt", "w");
	fseek(f, 0, SEEK_END);
	int a = 5;

	fwrite(&a, sizeof(int), 1, f);
	int length[] = { 1,2,3,4,5 };
	char* item[] = { "a", "ab", "abc", "abcd", "abcde" };


	int i = 0;
	for (i = 0; i < a; i++)
	{
		fwrite(&length[i], sizeof(int), 1, f);
	}


	for (i = 0; i < a; i++)
	{
		fwrite(item[i], strlen(item[i]), 1, f);
	}


	fclose(f);
}
