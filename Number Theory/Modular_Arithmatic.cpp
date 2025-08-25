/*                         
                             
               MOD For 
                      
                       Addition:          (a+b)%m=((a%m)+(b%m))%m
                       Multiplication:    (a*b)%m=((a%m)*(b%m))%m
                       Negative Number:   ans=(val%mod+mod)%mod; 
                       Divided:          
                              (a/b)%m=(a*(1/b))%m=(a*b^-1)%m
                                     x=b^-1
                                     Farmets Little Theorem:
                                    x^m-1=1(mod m)
                                    x^m-2=x^-1
                          so,      (b^-1)%m=b^(m-2)%m

                       
                       
                       
                       
                       
 */
// onk boro number MOD KORBO...string a nibo number  ta

/* #include <bits/stdc++.h>
using namespace std;
void div(string s,int m)
{
    int ans=0;
    for(int i=0;i<s.size();i++)
    {
        ans=ans*10+(s[i]-'0');
    }
    if(ans%m==0) cout<<"YES";
    else cout<<"NO";

}
int main()
{
    string s;
    cin>>s;
    int m;
    cin>>m;
    div(s,m);


	
} */



//       (a/b)%m


#include <bits/stdc++.h>
using namespace std;
int power(int base,int p)
{
    int res=1;
    while(p)
    {
        if(p%2==1)
        {
            res=(res*base);
            p--;
        }
        else
        {
            base=(base*base);
            p/=2;
        }
    }
    return res;
}
int main()
{
    int a,b,m,ans,x;
    cin>>a>>b>>m;
    x=power(a,b);
    cout<<x<<endl;
    //ans=(a*x)%m;
    ans=((a%m)*(x%m))%m;

    cout<<ans<<endl;

	
}