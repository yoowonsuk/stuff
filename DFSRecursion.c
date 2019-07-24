#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

#define NODE 10

void DFS(int (*)[], int *, int);

int main(void)
{
   int graph[NODE][NODE] = {0};
   int visitV[NODE] = {0};
   int startV, edge, x, y, i;

   printf("startV? ");
   scanf("%d", &startV);
   printf("edge? ");
   scanf("%d", &edge);

   for(i=0; i<edge; i++)
   {
     printf("Edge%d: ", i+1);
     scanf("%d %d", &x, &y);
     graph[x-1][y-1] = 1;
   }
   DFS(graph, visitV, startV-1);
   return 0;
}

void DFS(int (*gptr)[NODE], int * vptr, int startV)
{
  int i, curV;
  
  vptr[startV] = 1;
  printf("visit %d\n", startV+1);
  curV = startV;

  for(i=0; i<NODE; i++)
    if(gptr[curV][i] && !vptr[i])
    {
      vptr[i] = 1;
      DFS(gptr, vptr, i);
    }

}
