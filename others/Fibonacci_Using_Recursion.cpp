#include<bits/stdc++.h>
using namespace std;
int fibo(int n)
{

    //if(n==0) return 0;
   //if(n==1) return 1;
   if(n==1 || n==2) return n;
    else
    {

        return(fibo(n-1)+fibo(n-2));
    }
}
int main()
{

    int n;
    cin>>n;
    int ans=fibo(n);
    cout<<ans<<endl;
}
