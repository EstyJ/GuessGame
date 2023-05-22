#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{

	puts("#############################");
	printf("Welcome to my Guesing Game\n");
	puts("#############################");


	srand(time(NULL));

	int num, guessnum;

	num = ((rand() % 1000) + 1);

	printf("%d\n", num);
	
	printf("Enter a guess between 1 to 1000: \n");
	scanf("%d", &guessnum);

	if(guessnum == num)
	{
		puts("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
		puts("Congratulation you guessed right!!\n");
		puts("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
	}

	else
	{
		puts("**********************");
		puts("Sorry, Try Harder!!\n");
		puts("**********************");
	}

}
