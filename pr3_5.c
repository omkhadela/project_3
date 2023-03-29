// 5.Write C program to enter a number and print its reverse & check weather num is palindrome or not?

#include<stdio.h>  
main()    
{    
	int n,r,sum=0,temp;
	    
	printf("enter the number = ");    
	scanf("%d",&n);
	    
	temp=n;  
	  
	while(n>0)    
	{    
	r=n%10;    
	sum=(sum*10)+r;    
	n=n/10;    
	}    
	if(temp==sum)    
	printf("palindrome number ");    
	else    
	printf("not palindrome");     
}

