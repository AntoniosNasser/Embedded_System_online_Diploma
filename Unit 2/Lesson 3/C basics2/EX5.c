/*
 * EX5.c
 *
 *  Created on: ٢٣‏/٠٢‏/٢٠٢٢
 *      Author: Antonios Nasser
 *
 */

#include <stdio.h>

int main()
{
	char ch;
	printf("Enter a character: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&ch);
	switch(ch)
	{
	case 'a'...'z':
	case 'A'...'Z':
		printf("%c is an alphabet",ch);
		break;
	default:
		printf("%c is not an alphabet",ch);

	}

}
