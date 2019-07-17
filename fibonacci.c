#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int fibonacci(int n)
{
  int arr[40] = {0, 1}, i;

  if(n == 1)
    return 0;
  else if(n == 2)
    return 1;
  for(i=0; i<n-2; i++)
    arr[i+2] = arr[i+1] + arr[i];
  return arr[n-1];
}

int main(void)
{
   int n;

   printf("n? ");
   scanf("%d", &n);

   printf("result: %d\n", fibonacci(n));
   return 0;
}
