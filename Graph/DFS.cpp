#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define edl '\n'
#define ha cout << "YES" << endl
#define na cout << "NO" << endl
#define mod 1000000007
#define ll long long
#define pb push_back
const int N = 1e3 + 10;
vector<int> v[N];
int visited[N];
bool vis[N];

/*       ......Recursive Function....

       ......Time Complexity O(Vertex+Edge)


 */

/* void DFS(int node)
{
    visited[node]=1;
    cout<<node<<"->";
    for(int i=0;i<v[node].size();i++)
    {
        int child=v[node][i];
        if(visited[child]==0)
        {
           DFS(child);
        }
    }
} */
void DFS(int vertex)
{
     // 1.Take action on Vertex after Entering the Vertex
    cout << vertex << edl;
    vis[vertex] = true;
    for (int child : v[vertex])
    {
        cout << "par" << vertex << ",child " << child << edl;
        if (vis[child]==true)
            continue;

        // 2.Take action on child before Entering the child node
      else DFS(child);
        // 3.Take action on child after Entering the child node
    }
        // 4.Take action on Vertex brfore exciting the Vertex
}

int main()
{
    int node, edge;
    cin >> node >> edge;
    int x, y;
    while (edge--)
    {
        cin >> x >> y;
        v[x].pb(y);
        v[y].pb(x);
    }
    DFS(1);
}