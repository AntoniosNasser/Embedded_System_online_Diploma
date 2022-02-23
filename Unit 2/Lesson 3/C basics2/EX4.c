/*
 * EX4.c
 *
 *  Created on: ٢٣‏/٠٢‏/٢٠٢٢
 *      Author: Antonios Nasser
 *
 */

#include <stdio.h>

int main()
{
	float num;
	printf("Enter a number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&num);
	num == 0?printf("You entered zero"):num>0?printf("%0.2f is positive",num):printf("%0.2-f is negative",num);

}
