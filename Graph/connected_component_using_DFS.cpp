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

vector<vector<int>> cc;
vector<int> c_cc;

/* void DFS(int vertex)
{

    vis[vertex] = true;
    for (int child : v[vertex])
    {
        if (vis[child] == true)
            continue;

        else
            DFS(child);
    }
}
 */

void DFS(int vertex)
{

    vis[vertex] = true;
    c_cc.pb(vertex);
    for (int child : v[vertex])
    {
        if (vis[child] == true)
            continue;

        else
            DFS(child);
    }
}

int main()
{
    /*   int node, edge;
      cin >> node >> edge;
      int x, y;
      while (edge--)
      {
          cin >> x >> y;
          v[x].pb(y);
          v[y].pb(x);
      }
      int count = 0;
      for (int i = 1; i <= node; i++)
      {
          if (vis[i])
              continue;
          DFS(i);
          count++;
      }
      cout <<"Number of Connected Component :"<< count; */

    int node, edge;
    cin >> node >> edge;
    int x, y;
    while (edge--)
    {
        cin >> x >> y;
        v[x].pb(y);
        v[y].pb(x);
    }
    for (int i = 1; i <= node; i++)
    {
        if (vis[i])
            continue;
        c_cc.clear();
        DFS(i);
        cc.pb(c_cc);
    }
    cout <<"No. of CC :"<<cc.size() << edl;
    for (auto c_cc : cc)
    {
        for (int vertex : c_cc)
        {
            cout << vertex << " ";
        }
        cout << edl;
    }
}
