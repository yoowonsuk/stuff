#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int factorial(int n)
{
  static int arr[40] = {1, 1};

  if(!n)
    return 1;
  else if(n == 1)
    return 1;
  else
    arr[n] = factorial(n-1) * n;
  return arr[n];
}

int main(void)
{
   int n;

   printf("n? ");
   scanf("%d", &n);

   printf("%d!: %d\n", n, factorial(n));
   return 0;
}
