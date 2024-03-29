#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int factorial(int n)
{
  int i, result=1;

  if(!n || n == 1)
    return result;
  for(i=2; i<n; i++)
    result *= i;
  return result * n;
}

int main(void)
{
   int n;

   printf("n? ");
   scanf("%d", &n);

   printf("%d!: %d\n", n, factorial(n));
   return 0;
}
