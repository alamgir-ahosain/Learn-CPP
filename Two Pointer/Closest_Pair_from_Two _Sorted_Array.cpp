typedef long long int ll;
#define pi acos(-1.0)
#define mod 1000000007
#include <bits/stdc++.h>
using namespace std;
void solve(ll ar[],ll n,ll bar[],ll m,ll x)
{
    ll i=0;
    ll j=m-1;
    ll dif=INT_MAX;
    ll idx1,idx2;
    while(i<n && j>=0)
    {
        ll sum=ar[i]+bar[j];
        if(abs(sum-x)<dif)
        {
            idx1=i;
            idx2=j;
            dif=abs(sum-x);

        }
        if(sum<x) i++;
        else j--;

    
    }
    cout<<"( "<<ar[idx1]<<" "<<bar[idx2]<<" )  "<<ar[idx1]+bar[idx2];

}
int main()
{
    ll n,m,x;
    cin>>n>>m;
    ll ar[n],bar[m];
    for(int i=0;i<n;i++) cin>>ar[i];
    for(int i=0;i<m;i++) cin>>bar[i];
    cin>>x;
    sort(ar,ar+n);
    sort(bar,bar+m);
    solve(ar,n,bar,m,x);


   
}