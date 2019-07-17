#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int fibonacci(int n)
{
  static int arr[40] = {0, 1};

  if(arr[n-1])
    return arr[n-1];
  if(n == 1)
    return 0;
  else
    arr[n-1] = fibonacci(n-1) + fibonacci(n-2);
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
