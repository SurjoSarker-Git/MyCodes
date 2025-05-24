#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;



#define MAX 100

void bfs (int adj[MAX][MAX],int v,int start)
{
    int queue[MAX],front=0,rear=0;

    bool visited[MAX]={false};

    visited[start]=true;
    queue[rear++]=start;

    while(front<rear)
    {
        int current=queue[front++];
        cout<<current<<endl;

        for(int i=0;i<v;i++)
        {
            if(adj[current][i]==1&&visited[i]==0)
            {
                visited[i]=true;
                queue[rear++]=i;
                
            }
        }
       
    }
}

void edges(int adj[MAX][MAX],int u, int v)
{
    adj[u][v]=1;
}

int main ()
{
    int v,e,x,y;
    cin>>v>>>>e;
    int adj[MAX][MAX]={0};

    for(int i=0;i<e;i++)
    {
        cin>>x>>>>y;
       
    }
    edges(adj,x,y);
    bfs(adj,v,0);
    return 0;
}
