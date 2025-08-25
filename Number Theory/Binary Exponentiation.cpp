


#include<bits/stdc++.h>
using namespace std;
int power(long long int base,long long int pow)
{
    long long int result=1,last;
    while(pow)
    {
        if(pow%2==0)
         {
            base*=base;
           // base%=10;
            pow/=2;
          
        }
        else
        {
           result=(result*base);
          // last=result%10;
        //  base%=10;
            pow--;
        } 

    }
    return (result*base);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int base,pow;
        cin>>base>>pow;
        cout<<power(base,pow)<<endl;
    }
}  

/* 




power(int a,int b)
{
    ll ans=power(a,b/2);
    if(b==0) return 1;
    if(b&1)   //b%2==1
    {
        return a*ans*ans;
    }
    else 
    return ans*ans;
}


binaryExIterator(ll a,ll b)
{
    ll ans=1;
    while(b>0)
    {
        if(b&1)
        {
            ans=ans*a;
        }
        else {
            a=a*a;
            b=b>>1;
        }
    }
    cout<<ans;
}




 */






 