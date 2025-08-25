#include <bits/stdc++.h>
using namespace std;

int main(){
    int len,sum,ans=0;
    cin>>len;
    int a[len];
    for(int i=0;i<len;i++)
    {
        cin>>a[i];
    }
    for( int i=0; i<len; i++ )
    {
        for( int j=i; j<len; j++ )
        { 
            sum=0;
            for( int k=i; k<=j; k++ )
            {
                //cout<<a[k]<<" ";
                sum+=a[k];
            }
           ans+=sum;
           cout<<sum<<endl;
        }
    }
    cout<<ans;
    return 0;
}