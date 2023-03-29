// 1.Write C program to print all alphabets from a to z. using do while loop

#include<stdio.h>
main()

{
	char a='A';
	do
	{
		printf("%c",a);
		a++;
		printf("\n");
	}
	while(a<='Z');	
}

