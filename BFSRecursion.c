void BFS(int startV)
{
  int i;

  visit[startV] = 1;
  action;

  for(i=0; i<NODE; i++)
    if(graph[i][startV] && !visit[i])
      Enqueue;

  if(!QIsEmpty)
    BFS(Dequeue);
  return;
}
