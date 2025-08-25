#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        for(int i=1;i<=sqrt(n);i++)
        {
            if(n%i==0) c++;
        }
        int sq=sqrt(n);
        if(sq*sq==n) cout<<(2*c)-1<<endl;
        else cout<<2*c<<endl;
    }
}