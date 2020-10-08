#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void read(int *);
void printNum(int a);

int main() {
	int number = 0;
	int *num = NULL;
	num = &number;
	printf("olla sekai\n");
	read(num);
        printNum(number);
	return 0;	
}


void read(int* o){
	scanf(" %d", o);
}

void printNum(int a){
printf(" %d\n",a);
}