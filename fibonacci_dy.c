#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int fibonacci(int n)
{
  static int arr[40];

  if(n == 1)
    return 0;
  else if(n == 2)
    return 1;
  else if(arr[n])
    return arr[n];
  else
    arr[n] = fibonacci(n-1) + fibonacci(n-2);
  return arr[n];
}

int main(void)
{
  int n;

  printf("n? ");
  scanf("%d", &n);
  
  printf("result: %d\n", fibonacci(n));
  return 0;
}
