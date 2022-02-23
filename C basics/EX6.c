/*
 * EX6.c
 *
 *  Created on: ٢٣‏/٠٢‏/٢٠٢٢
 *      Author: Antonios Nasser
 */

#include <stdio.h>

int main()
{
	float num1,num2,temp;
	printf("Enter value of a: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&num1);
	printf("Enter value of b: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&num2);
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("After swapping, value of a = %0.2f\n",num1);
	printf("After swapping, value of b = %0.2f\n",num2);
}

