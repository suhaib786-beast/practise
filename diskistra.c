#include<stdio.h>
#define INF 9999
int main(){
    int n=6;
    int graph[6][6]={
        {0,4,2,0,0,0},
        {4,0,5,3,0,0},
        {2,5,0,8,0,4},
        {0,3,8,0,2,5},
        {0,0,0,2,0,3},
        {0,0,4,5,3,0}
    };

    int dist[6];
    int visit[6]={0};
    int source=0;
    
  
    for(int i=0;i<n;i++){
        dist[i]=INF;
    }
      dist[source]=0;

      for(int count=0;count<n;count++){
        int u=-1;
        for(int i=0;i<n;i++){
            if(visit[i]==0 && (u==-1 || dist[i]<dist[u]))
                u=i;
        }
        visit[u]=1;
        for(int v=0;v<n;v++){
            if(visit[v]==0 && dist[u]+graph[u][v]<dist[v] &&graph[u][v]!=0 )
                dist[v]=graph[u][v]+dist[u];
        }
      }
      for(int i=0;i<n;i++){
        printf("%d",dist[i]);
      }
      return 0;
}