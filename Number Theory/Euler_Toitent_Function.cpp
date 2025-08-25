
/* ------------------find coprime(GCD 1 )



60=2*2*3*5
  =2^2*3^1*5^1
 Total number of Co-Prime,n=n*(1-1/2)*(1-1/3)*(1-1/3)
 O(sqrt(n))


 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define edl '\n'
int main()
{
    int n;
    cin>>n;
   int  ans=n;
for(int i=2;i*i<=n;i++)
{
    if(n%i==0)
    {
        int cnt=0;
        while(n%i==0)
        {
            n/=i;
            cnt++;
        }
        cout<<i<<"^"<<cnt<<edl;
        ans*=(i-1);
        ans/=i;
    }
}
if(n>1) 
{
    cout<<n<<"^"<<1<<edl;
    ans*=n-1;
    ans/=n;
}

cout<<n<<" er Coprime "<<ans<<edl;
}