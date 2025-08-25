/* 
                   Euclid Algorithm-GCD
                --------------------------
                GCD=Greatest Common Divisor
                
                10=1,2,5,10
                40=1,2,4,5,8,10,20,40
                SO GCD(10,40)=10

                gcd(a,b)=gcd(b,a%b) if gcd(b,0) then b=result
                gcd(10,40)
                gcd(40,10)
                gcd(10,0)
                result=10



              

 */
 
 #include <bits/stdc++.h>
using namespace std;
long long int gcd(int a,int b)
{
   if(b==0) return a;
   return gcd(b,a%b);
}
int main()
{
 long long int  a,b;
   cin>>a>>b;
   int x=gcd(a,b);
   cout<<x;

	
} 
 


//  array of GCD
 /* #include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
   if(b==0) return a;
   return gcd(b,a%b);
}
int main()
{
   int n;
   cin>>n;
int a[n];
for(int i=1;i<=n;i++) cin>>a[i];
int prefixGcd[100];
prefixGcd[0]=0;// 0 and onno no. er GCD same thake,,tai 0 dora hoyese


for(int i=1;i<=n;i++) 
{
   prefixGcd[i]=gcd(prefixGcd[i-1],a[i]);
}
for(int i=1;i<=n;i++) cout<<prefixGcd[i]<<" ";
	
}





 */
