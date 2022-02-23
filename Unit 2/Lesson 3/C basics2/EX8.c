/*
 * EX8.c
 *
 *  Created on: ٢٣‏/٠٢‏/٢٠٢٢
 *      Author: Antonios Nasser
 */

#include <stdio.h>

int main()
{
	char sign;
	float num1,num2,result;
	printf("Enter operator either + or - or * or /: ");
	fflush(stdout);
	scanf("%c",&sign);
	fflush(stdin);
	printf("Enter two operands: ");
	fflush(stdout);
	scanf("%f %f",&num1,&num2);
	fflush(stdin);
	switch(sign)
	{
	case '+':
		result = num1+num2;
		printf("%0.2f %c %0.2f = %0.2f",num1,sign,num2,result);
		break;
	case '-':
		result = num1-num2;
		printf("%0.2f %c %0.2f = %0.2f",num1,sign,num2,result);
		break;
	case '*':
		result = num1*num2;
		printf("%0.2f %c %0.2f = %0.2f",num1,sign,num2,result);
		break;
	case '/':
		if(num2!=0)
		{
			result = num1/num2;
			printf("%0.2f %c %0.2f = %0.2f",num1,sign,num2,result);
		}
		else
			printf("Invalid Operand");
		break;
	default:
		printf("Invalid Operator");
	}


}
