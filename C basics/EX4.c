/*
 * EX4.c
 *
 *  Created on: ٢٣‏/٠٢‏/٢٠٢٢
 *      Author: Antonios Nasser
 */

#include <stdio.h>

int main()
{
	float num1,num2;
	printf("Enter two numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f",&num1,&num2);
	printf("Sum: %f",num1*num2);
}

