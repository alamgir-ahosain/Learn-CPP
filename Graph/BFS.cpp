#include<bits/stdc++.h>
using namespace std;



int vis[10001],dis[10001];
vector<int>v[10001];
void bfs(int node)
{
	queue<int>q;
	q.push(node);
	vis[node]=1;
	dis[node]=0;
	while(!q.empty())
	{
		int currentNode=q.front();
		q.pop();
		for(int child: v[currentNode])
		{
			if(vis[child]==0)
			{
				dis[child]=dis[currentNode]+1;
				vis[child]=1;
				q.push(child);
			}
		}
	}
}


int main()
{
	int n,m,i,x,y;
	cin>>n>>m;
	while(m--)
	{
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	bfs(1);
	for(i=1;i<=n;i++)
	{
		cout<<"The level of "<<i<<" is: "<<dis[i]<<endl;
	}
	return 0;
}
/*

BFS Algorithm Applications
To build index by search index
For GPS navigation
Path finding algorithms
In Ford-Fulkerson algorithm to find maximum flow in a network
Cycle detection in an undirected graph
In minimum spanning tree



BFS Algorithm Complexity
The time complexity of the BFS algorithm is represented in the form of O(V + E), 
where V is the number of nodes and E is the number of edges.

The space complexity of the algorithm is O(V).


 */