/* #include <bits/stdc++.h>
using namespace std;
vector<int>v;
bool prime[1000000002];   //globally declared korle index value initally 0 hoy
void seive(ll  n)
{
   for (int i = 2; i <= sqrt(n); i++)
   {
       if (prime[i] == 0)
       {
           for (int j = i * i; j <= n; j += i)  prime[j] = 1;
       }
   }


   for (int k = 2; k <= n; k++)
   {
       if (prime[k] == 0) v.push_back(k);
   }
}

int main()
{
   ll n=100000000;
   int t;
   seive();
   cin>>t;
   while(t--)
   {
       ll idx;
       cin>>idx;
     cout<<v[idx-1];

} */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define edl '\n'
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        int x, y;
        x = a[n - 1];
        y = b[n - 1];
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > x)
            {
                swap(a[i], b[i]);
            }
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (b[i] > y)
            {
                swap(a[i], b[i]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
    }
}