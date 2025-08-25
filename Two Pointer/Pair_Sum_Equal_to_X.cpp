typedef long long int ll;
#define pi acos(-1.0)
#define mod 1000000007
#include <bits/stdc++.h>
using namespace std;
int main()
{
     ll n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        ll m;
        cin>>m;
        v.push_back(m);
    }
    
    sort(v.begin(),v.end());
        
  ll x,c=0,a,b;
  cin>>x;

  ll i=0;
  ll j=n-1;
  while(i<j)
    {
        if(v[i]+v[j]<x) i++;
        else if(v[i]+v[j]>x) j--;
        else {
             c=1;
             a=i;
             b=j;
             break;
        }
    }
    if(c==1) cout<<v[a]<<"+"<<v[b]<<"="<<x<<endl;
    else cout<<"Not Found"<<endl;


   }