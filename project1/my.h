#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include <string.h>
#include <fcntl.h>
#include <time.h>
#include<stdlib.h>

typedef struct user{
	int id;
	char name[8];
	char htel[12];
	char tel[12];
}recorder;



recorder* input();

int save(recorder *r);

int randdat(recorder* r);

void mysort(recorder* r, int count);

void output(recorder *r, int count);

recorder* getRecorders();

int getRecorderCount();

