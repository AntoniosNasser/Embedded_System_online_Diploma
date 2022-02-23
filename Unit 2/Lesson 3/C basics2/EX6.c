/*
 * EX6.c
 *
 *  Created on: ٢٣‏/٠٢‏/٢٠٢٢
 *      Author: Antonios Nasser
 *
 */

#include <stdio.h>

int main()
{
	int num,Sum = 0;

	printf("Enter an intager: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
		Sum +=i;
	printf("Sum = %d",Sum);

}

