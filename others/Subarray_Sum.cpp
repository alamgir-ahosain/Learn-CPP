#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,ans=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        d=0;
        for(int j=0;j<n;j++)
        {
            d+=a[j];
            cout<<d<<endl;
            ans+=d;
        }
    }
    cout<<ans;
}