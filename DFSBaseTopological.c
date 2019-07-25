#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

#define BLD_NUM 100

int search(int (*mptr)[BLD_NUM], int bptr[], int dp[], int indegree[], int node, int desti)
{
  int /*q[BLD_NUM], f, r,*/ i, j, /*temp,*/ cnt, cpymat[BLD_NUM][BLD_NUM], max[BLD_NUM];
  cnt = node;

  for(i=0; i<node; i++)
    for(j=0; j<node; j++)
      cpymat[i][j] = mptr[i][j];

  for(i=0; i<node; i++)
    max[i] = 0;

while(cnt)
{
  for(i=0; i<node; i++)
  {
    if(!indegree[i])
    {
      /*q[r++] = i,*/ cnt--;
      if(dp[i] < bptr[i] + max[i])
        dp[i] = bptr[i] + max[i];
   // }

   // while(f != r)
   // {
   //   temp = q[f++];
      for(j=0; j<node; j++)
        if(cpymat[/*temp*/i][j])
        {
          if(dp[j] < dp[i] + bptr[j])
            dp[j] = dp[i] + bptr[j];
          cpymat[/*temp*/i][j]--, indegree[j]--;
        }
    }
  }
}

return dp[desti];




  /*
  int stack[1000], rear=0, i=0, max[1000]={0}, next = desti;

  while(1)
  {
    while(i < node)
    {
      if(mptr[i][next])
      {
        stack[rear++] = next;
        next = i;
        i=0;
        continue;
      }
      i++;
     }

    if(dp[next] < bptr[next] + max[next])
      dp[next] = bptr[next] + max[next];

    if(!rear)
      return dp[desti];

    if(max[stack[--rear]] < dp[next])
      max[stack[rear]] = dp[next];
    i = next+1;
    next = stack[rear];
  }

  int i, max = 0, result;
  if(dp[desti])
    return dp[desti];
  
  for(i=0; i<node; i++)
    if(mptr[i][desti])
    {
      result = search(mptr, bptr, dp, node, i);
      if(result > max)
        max = result;
    }
  if(dp[desti] < bptr[desti] + max)
    dp[desti] = bptr[desti] + max;
  return dp[desti];
  */
}

int main(void)
{
   int i, j, cnt, node, way, desti, x, y;
   int bld[BLD_NUM];
   int mat[BLD_NUM][BLD_NUM];
   int dp[BLD_NUM];
   int indegree[BLD_NUM];

   scanf("%d", &cnt);
   while(cnt--)
   {
     // memset(met, 0, sizeof(met)); more than needs
     scanf("%d %d", &node, &way);

     for(i=0; i<node; i++)
       for(j=0; j<node; j++)
         mat[i][j] = 0;
     
     for(i=0; i<node; i++)
       dp[i] = indegree[i] = 0;

     for(i=0; i<node; i++)
       scanf("%d", &bld[i]);

     for(i=0; i<way; i++)
     {
       scanf("%d %d", &x, &y);
       mat[x-1][y-1] = 1;
       indegree[y-1]++;
     }

     scanf("%d", &desti);

     printf("%d\n", search(mat, bld, dp, indegree, node, desti-1));
   }
   return 0;
}
