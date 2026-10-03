#include<stdio.h>
int main (){
    int n,edge,weight,u,v;
    int matrix[n][n];
    printf("enter the value of vertices");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++ ){
        matrix[i][j]=0;
    }
    }

    printf("enter the edge");
    scanf("%d",&edge);

    for(int i=0;i<edge;i++){
        printf("enter the %d edge",i+1);
       scanf("%d %d %d",&u , &v, &weight);

        matrix[u][v]=weight;
        matrix[v][u]=weight;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}