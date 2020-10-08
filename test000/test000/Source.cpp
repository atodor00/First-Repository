#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void read(int *);

int main() {
	int number = 0;
	int *num = NULL;
	num = &number;
	printf("olla sekai");
	read(num);
	return 0;	
}


void read(int* o){
	scanf(" %d", o);
}
