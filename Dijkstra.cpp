#include<bits/stdc++.h>
using namespace std;
#define MAX 100
#define INF 9999

void dijk(int adj[MAX][MAX],int n,int start)
{
    int cost[MAX][MAX],dist[MAX],visited[MAX],pred[MAX];
    int i,j,counts,mindist,nextnode;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(adj[i][j]==0)
            {
                cost[i][j]=INF;
            }
            else
            {
                cost[i][j]=adj[i][j];
            }
        }
    }

    for(i=0;i<n;i++)
    {
        dist[i]=cost[start][i];
        pred[i]=start;
        visited[i]=0;
    }

    dist[start]=0;
    visited[start]=1;
    counts=1;
    while(counts<n-1)
    {
        mindist=INF;
        for(i=0;i<n;i++)
        {
            if(dist[i] < mindist && !visited[i])
            {
                mindist=dist[i];
                nextnode=i;
            }
        }
        visited[nextnode]=1;
        for(i=0;i<n;i++)
        {
            if(!visited[i])
            {
                if(mindist+cost[nextnode][i] < dist[i])
                {
                    dist[i]=mindist+cost[nextnode][i];
                    pred[i]=nextnode;
                }
            }
        }
        counts++;
    }

    for(i=0;i<n;i++)
    {
        if(i!=start)
        {
            cout << "The distance of node " <<i<< " is " << dist[i] << endl;
            cout << "The path is: " << i;

            j=i;
            do
            {
                j=pred[j];
                cout << "<-" << j;
            }while(j!=start);
            cout << endl;
        }
    }
}
int main()
{
    int adj[MAX][MAX],start;
    int i,j,n;
    cout << "Enter no of vertices: ";
    cin>>n;
    cout << "Enter the graph:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>adj[i][j];
        }
    }
    cout << "Enter the starting node: ";
    cin>>start;

    dijk(adj,n,start);

    return 0;
}
