/*
 * EX5.c
 *
 *  Created on: ٢٣‏/٠٢‏/٢٠٢٢
 *      Author: Antonios Nasser
 */

#include <stdio.h>

int main()
{
	char ch;
	printf("Enter a character: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&ch);
	printf("ASCII value of %c = %d",ch,ch);
}

