#include <stdio.h>
#include <iostream>

int main()
{
	char name[6];
	char anothername[] = { 'g', 'a', 'y' };
	printf("Kak vas zovut? ");
	scanf("%s", name);
	printf("Privet %s \n", name);
	std::cout << "adres1 " << &name[8] << std::endl;
	printf("Privet %s \n", anothername);
	std::cout << "adres2 " << &anothername[5] << std::endl;
	return 0;
}