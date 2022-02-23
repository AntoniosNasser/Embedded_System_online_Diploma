/*
 * EX1.c
 *
 *  Created on: ٢٣‏/٠٢‏/٢٠٢٢
 *      Author: Antonios Nasser
 */


#include <stdio.h>

int main()
{
	int num;
	printf("Enter an integer you want to check: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num);
	num%2?printf("%d is odd.",num):printf("%d is even.",num);

}

