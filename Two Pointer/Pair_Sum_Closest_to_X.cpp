typedef long long int ll;
#define pi acos(-1.0)
#define mod 1000000007
#include <bits/stdc++.h>
using namespace std;

void  solve(int arr[],ll n,ll x)
{
    ll diff=INT_MAX;
    ll i=0;
    ll j=n-1;
    ll idx1,idx2;
    while(i<j)
    {
        ll sum=arr[i]+arr[j];
       if(abs(sum-x)<diff)
       {
        idx1=i;
        idx2=j;
        diff=abs(sum-x);
       }
       if(sum>x) j--;
       else i++;

   }
    cout<<"( "<<arr[idx1]<<" "<<arr[idx2]<<" )"<<" ="<<arr[idx1]+arr[idx2]; 


}
int main()
{
     ll n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
  sort(arr,arr+n);
  ll x,c=0,a,b;
  cin>>x;
  solve(arr,n,x);
}