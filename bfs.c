#include<stdio.h>
int main (){
    int graph[5][5]={
        {0,1,1,0,0},
        {1,0,0,1,1},
        {1,0,0,0,0},
        {0,1,0,0,0},
        {0,1,0,0,0}
    };
    int visit[5]={0};
    int queue[5];
    int start=0,front=0,rear=0;
    queue[rear]=start;
    rear++;
    visit[start]=1;
    

    while(front<rear){
        int ans=queue[front];
        front++;
        for(int i=0;i<5;i++){
            if(graph[ans][i]==1&& visit[i]==0){
                queue[rear]=i;
                rear++;
                visit[i]=1;
            }
        }
        printf("%d\n",ans);
    }
    return 0;

}