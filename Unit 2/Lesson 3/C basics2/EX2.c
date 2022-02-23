/*
 * EX2.c
 *
 *  Created on: ٢٣‏/٠٢‏/٢٠٢٢
 *      Author: Antonios Nasser
 */

#include <stdio.h>
#include <ctype.h>

int main()
{
	char ch,temp;
	printf("Enter an alphabet: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&ch);
	temp = tolower(ch);

	switch(temp)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf("%c is a vowel",ch);
		break;
	default:
		printf("%c in a consonant",ch);
	}

}
