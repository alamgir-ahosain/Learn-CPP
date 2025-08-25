#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define edl '\n'
#define ha cout << "YES" << endl
#define na cout << "NO" << endl
#define mod 1000000007
#define ll long long
#define pb push_back

/*
            1
          2   3
            4   5


 */
vector<int> v[100000];
void  PrintGraph(int node, int edge)
{
    int x, y;
    while (edge--)
    {
        cin >> x >> y;
        v[x].pb(y);
        v[y].pb(x);
    }
    for (int i = 1; i <= node; i++)
    {
        cout << i;
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << "-> " << v[i][j];
        }
        cout << edl;
    }
}
int main()
{
    int node, edge;
    cin >> node >> edge;
    PrintGraph(node, edge);
}