// 3.Write C program to count number of digits in a number.

#include<stdio.h>
main()

{
int n,count = 0;

 printf("Enter an integer: ");
 scanf("%d", &n);
 
 do
 {
  n /= 10;
  count++;
 } 
 while (n != 0);
 printf("Number of digits: %d", count);
}

