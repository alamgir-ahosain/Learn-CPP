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

/* bool DFS(int vertex, int par)
{

    vis[vertex] = true;
    bool isLoopExists = false;

    for (int child : v[vertex])
    {
        if (vis[child] && child == par)
            continue;
        if (vis[child] == true)
            return true;

        isLoopExists |= DFS(child, vertex);
    }
    return isLoopExists;
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
    bool isLoopExists = false;
    for (int i = 1; i <= node; i++)
    {
        if (vis[i])
            continue;
        if (DFS(i, 0))
        {
            isLoopExists = true;
            break;
        }
    }
    cout << isLoopExists << edl;
} */


bool dfs(int node,int par)
{
    vis[node]=1;
    for(int child :v[node])
    {
        if(vis[child]==0)
        {
            if(dfs(child,node)==true) return true;
         }
         else
         {
            if(child!=par) return true;
         }
    }
    return false;
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

bool ans=dfs(1,-1);
if(ans) cout<<"cycle";
else cout<<"Not";
}




 