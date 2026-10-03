#include<stdio.h>
int main (){
    int n=6;
    int graph[6][6]={
        {0,4,2,0,0,7},
        {4,0,5,3,6,0},
        {2,5,0,8,0,4},
        {0,3,8,0,2,5},
        {0,6,0,2,0,3},
        {7,0,4,5,3,0}};

        int visit[6]={0};
        int total=0;int edge=0;
        visit[0]=1;
        while(edge<n-1){
            int min=99999;
            int u=-1;
            int v=-1;
            for(int i=0;i<n;i++){
                if(visit[i]){
                    for(int j=0;j<n;j++){
                        if(visit[j]==0&&graph[i][j]!=0&&graph[i][j]<min){
                            min=graph[i][j];
                            u=i;v=j;
                        }
                    }
                }
            }
            visit[v]=1;
            printf("%d %d\n",u,v);
            edge++;
            total+=min;

        }
        printf("%d",total);
        return 0;



    }