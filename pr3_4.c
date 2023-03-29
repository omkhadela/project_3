//4.Write C program to find sum of first and last digit of a number.

#include<stdio.h>
main()

{
    int n, sum=0, firstDigit, lastDigit;

    printf("Enter any number to find : ");
    scanf("%d", &n);
    
    lastDigit = n % 10;
    

    firstDigit = n;

    while(n >= 10)
    {
        n = n / 10;
    }
    firstDigit = n;


    sum = firstDigit + lastDigit; 

    printf("Sum of first and last digit = %d", sum);
}

