/*
 2. Напишите программу, которая вводит с клавиатуры один символ, и
 выводит DIGIT, этот символ является цифрой, CAPITAL - если 
 заглавной латинской буквой, LOWERCASE - если строчной, и выводит
 NON-ALPHANUMERIC в противном случае.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// или раскомментируйте это, если вам больше нравится iostream:
// #include <iostream>
// using namespace std;

int main()
{
	char symb;
	printf("Vvedite symvol");
	scanf("%c", &symb);
	if (symb >= '0' && symb <= '9')
	{
		printf("DIGIT");
	}
	else
	{
		if (symb >= 'a' && symb <= 'z') {
			printf("lowercase");
		}
		else
		{
			if (symb >= 'A' && symb <= 'Z') {
				printf("CAPITAL");
			}
			else
			{
				printf("ERROR");
			}
		}
	}
	return 0;
		}
	

