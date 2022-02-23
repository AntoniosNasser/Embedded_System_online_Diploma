/*
 * Ex3.c
 *
 *  Created on: ٢٣‏/٠٢‏/٢٠٢٢
 *      Author: Antonios Nasser
 */


#include <stdio.h>
#include <ctype.h>

int main()
{
	float num1,num2,num3,largest;
	printf("Enter three numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f %f",&num1,&num2,&num3);

	if(num1>num2&&num1>num3)
		largest = num1;
	else if(num3>num1&&num3>num2)
		largest = num3;
	else
		largest = num2;
	printf("Largest number = %0.2f",largest);

}
