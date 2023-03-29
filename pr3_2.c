// 2.Write C program to print multiplication table of any number...

#include<stdio.h>
main()

{
	int n,i;
		
	printf("enter number : ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("%d X %d = %d",n,i,n*i);	
		printf("\n");
	}
		
}

