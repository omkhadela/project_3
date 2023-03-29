// 7.Write C program print out Fibonacci series. (0,1,1,2,3,5,8…)


#include<stdio.h>
main()

{
    int i, n;
 	int d = 0, m = 1;
	int nextTerm = d + m;

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  printf("Fibonacci Series: %d, %d ", d, m);

  for (i = 3; i <= n; i++) 
  {
    printf("%d ", nextTerm);
    d = m;
    m = nextTerm;
    nextTerm = d + m;
  }

}

