#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    vector<int> v;
    for (int i = 10; i >= 0; --i)
    {
        if (k & (1 << i))
            v.push_back(i);
    }
    sort(v.begin(), v.end());
  
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            if (a[i] & (1 << v[j]))
                continue;
            else
            {
                a[i] = 0;
            }
        }
    }
    vector<int> al;
    int f = 0;
    for (int i = 0; i < a.size(); i++)
        if (a[i] != 0)
            al.push_back(a[i]);
   
   int ans=-1;
for(int i=0;i<al.size();i++)
{
    ans&=al[i];
}
    if (ans==k)
        cout << "ha" << endl;
    else
        cout << "na" << endl;
}
