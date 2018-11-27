#include<stdio.h>
#include<string.h>
#include<io.h>
#include<stdlib.h>

int
main()
{
	//iCarry == Reminder
	int i = 0, iCarry = 0, sum[20];
	char str1[10];
	char str2[10];

	printf("Enter Input as a First Binary Number : ");
	gets(str1);
	printf("Enter Input as a Second Binary Number : ");
	gets(str2);

	long binary1 = atoi(str1);
	long binary2 = atoi(str2);

	while (binary1 != 0 || binary2 != 0)
	{
		sum[i++] =(binary1 % 10 + binary2 % 10 + iCarry) % 2;
		iCarry =(binary1 % 10 + binary2 % 10 + iCarry) / 2;
		binary1 = binary1 / 10;
		binary2 = binary2 / 10;
	}
	if (iCarry != 0)
	{
		sum[i++] = iCarry;
	}
	--i;
	printf("Sum of two binary Strings is : ");
	while (i >= 0)
	{
		printf("%d", sum[i--]);
	}
	printf("\n");
	getchar();
	return 0;
}