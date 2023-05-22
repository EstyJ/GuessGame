#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{

	puts("#############################");
	printf("Welcome to my Guesing Game\n");
	puts("#############################");


	srand(time(NULL));

	int num;

	num = ((rand() % 1000) + 1);

	//printf("%d\n", num);
}
