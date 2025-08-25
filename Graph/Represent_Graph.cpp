#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
int graph1[N][N];
vector<int>graph2[N];
vector<pair<int,int>>graph3[N];

int main()
{
  
       /*     ...Adjancy Matrix ....

           question
           1.Connector or Not?{graph[i][j]==1} ha
           2.weight?(graph[i][j]) 
           Find Answer :O(1)
 */

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph1[v1][v2] = 1;
        graph1[v2][v1] = 1;
    }
    // O(N^2)-Space Complexity
    // Maximum size of Matrix  can made 10^4*10^4
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << graph1[i][j] << " ";
        }

        cout<<endl;
    }
 

/* int n,m;
cin>>n>>m;
for(int i=0;i<m;i++)
{
    int v1,v2;
    cin>>v1>>v2;
    graph2[v1].push_back(v2);
    graph2[v2].push_back(v1);

}
//space Complexity---DO not Exceed

 for (int i = 1; i <= n; i++)
    {
        cout << i;
        for (int j = 0; j < graph2[i].size(); j++)
        {
            cout << "-> " << graph2[i][j];
        }
        cout << endl;
    }
 */

/*
        ....with weight.......


int n,m;
cin>>n>>m;
for(int i=0;i<m;i++)
{
    int v1,v2,weight;
    cin>>v1>>v2>>weight;
    graph3[v1].push_back({v2,weight});
    graph3[v2].push_back({v1,weight});

} 




 */


    
}