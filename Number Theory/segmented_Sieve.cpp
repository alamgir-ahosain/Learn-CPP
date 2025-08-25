#include<bits/stdc++.h>
using namespace std;
vector<int>v;
void sieve(int n)
{
    int prime[100001]= {0};
    for(int i=2; i*i<n; i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i; j<=n; j+=i) prime[j]=1;
        }
    }
    for(int i=2; i<=n; i++)
    {
        if(prime[i]==0) v.push_back(i);
    }

}
void init(int l,int r)
{
    if(l==1) l++;//1 theke to r shuru korbo na
    int mx=r-l+1;
    int ar[mx+1];
    for(int i=0; i<=mx; i++) ar[i]=0;
    for(int p:v)
    {
        if(p*p<=r)
        {
            int i=(l/p)*p;//gunitok ber korse
            if(i<l) i+=p;
            for(; i<=r; i+=p)
            {
                if(i!=p) ar[i-l]=1;
            }
        }
    }
    for(int i=0; i<mx; i++)
    {
        if(ar[i]==0) cout<<l+i<<endl;
    }

}
int main()
{
    sieve(100000);
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        init(l,r);
        cout<<endl;

    }

}
