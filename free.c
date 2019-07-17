#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int main(void)
{
   int * ptr = (int *)malloc(sizeof(int)*3);
   int * ptr0, * ptr1, * ptr2;

   ptr[0] = 1;
   ptr[1] = 2;
   ptr[2] = 3;

   ptr0 = &ptr[0];
   ptr1 = &ptr[1];
   ptr2 = &ptr[2];

   free(ptr0);

   printf("%d %d %d\n", *ptr0, *ptr1, *ptr2);
   return 0;
}
