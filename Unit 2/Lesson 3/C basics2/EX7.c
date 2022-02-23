/*
 * EX7.c
 *
 *  Created on: ٢٣‏/٠٢‏/٢٠٢٢
 *      Author: Antonios Nasser
 */


#include <stdio.h>

int main()
{
	int num,factorial = 1;

	printf("Enter an intager: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num);
	if(num>=0)
	{
		for(int i=1;i<=num;i++)
			factorial *=i;
		printf("Factorial = %d",factorial);
	}
	else
	{
		printf("Error!!! Factorial of negative number doesn’t exist.");
	}

}

