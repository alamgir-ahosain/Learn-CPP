/* #include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int>v;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0) v.push_back(i);
    }
    cout<<v.size();



} */

// using set

#include <bits/stdc++.h>
using namespace std;
vector<int> v, ans, a, b;

void divisor(int n)
{
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                v.push_back(i);
            else
            {
                v.push_back(i);
                v.push_back(n / i);
            }
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    divisor(n);
    a = v;
    v.clear();
    divisor(m);
    b = v;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (auto i : a)
        cout << i << " ";
    cout << endl;
    for (auto i : b)
        cout << i << " ";
    cout << " fg" << endl;
    int mi = min(a.size(), b.size());
    int cnt = 0;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i; j < b.size(); j++)
        {
            if (a[i] == b[j])
            {
                cnt++;
                break;
            }
        }
    }
   // cout << cnt << endl;


    /* cout<<" No of Divisor :"<<v.size()<<endl;
    for(auto i:v) cout<<i<<" "; */

    /* int cnt = 1;
    int val = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] - val == 1)
        {
            cnt++;
            val = v[i];
        }
        else
        {
            ans.push_back(cnt);
            cnt = 1;
            val = v[i];
        }
    }
    sort(ans.begin(), ans.end());
    cout << ans[ans.size() - 1] << endl;
    // for(auto i:ans) cout<<i<<" ";
}

 */
}
