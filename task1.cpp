/* 
 1. Напишите программу, которая вводит с клавиатуры одно целое число,
    и выводит POL, если оно положительно, OTR — если отрицательно, и
    NUL, если это нуль.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//romario
int main() 
{
	int x;
	printf("Vvedite chislo : ");
	scanf("%d", &x);
	if (x > 0) 
	{
		printf("POL");
	}
	if (x < 0)
	{
		printf("OTR");
	}
	else if (x == 0)
	{
		printf("NUL");
	}
	return 0;
}
