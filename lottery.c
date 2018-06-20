/*
Name: Harlan Chang
Description: Program gets a random number from 10 to 99 and asks the user to input a number. If the user gets the correct number, they win $100,000. If the user gets the correct digits, but in the wrong order, they win $50,000. If the user only gets 1 digit correct, they win $30,000.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int input;
	int lottery;
	char checkInput[2];
	char checkLott[2];
	srand(time(NULL));
	lottery = rand() % 90 + 10;
	
	printf("Please enter a number from 10 to 99: ");
	scanf("%d",&input);
	
	checkInput[0] = input/10;
	checkInput[1] = input%10;
	checkLott[0] = lottery/10;
	checkLott[1] = lottery%10;
	
	if(input == lottery)
	{
		printf("The winning ticket number is %d.\n You win $100,000!\n", input);
	}
	else if((checkInput[0] == checkLott[1])&&(checkInput[1] == checkLott[0]))
	{
		printf("The winning number is %d.\n", lottery);
		printf("Your ticket is %d.. all digits are right, but not in order. You win $50,000!\n",input);
	}
	else if((checkInput[0] == checkLott[0])||(checkInput[0] == checkLott[1])||(checkInput[1] == checkLott[0])||(checkInput[1] == checkLott[1]))
	{
		printf("The winning number is %d.\n", lottery);
		printf("Your ticket %d matched one digit in the lottery. You win $30,000\n", input);
	}
	else 
	{ 
		printf("The winning number is %d.\n", lottery);
		printf("Sorry. You did not win!\n");
	}

	return 0;
}