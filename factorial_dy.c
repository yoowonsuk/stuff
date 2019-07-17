#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int factorial(int n)
{
  static int arr[40] = {1, 1};

  if(arr[n])
    return arr[n];
  else
    return arr[n] = factorial(n-1) * n;
}

int main(void)
{
   int n;

   printf("n? ");
   scanf("%d", &n);

   printf("%d!: %d\n", n, factorial(n));
   return 0;
}
