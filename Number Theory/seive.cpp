#include <bits/stdc++.h>
using namespace std;
const int N=1e7+10;
vector<bool>prime(N,0);
vector<long long>v; 
  //globally declared korle index value initally 0 hoy
//tIME cOMPLEXITY Ologlog(n)
void seive(int n)
{
	prime[0]=prime[1]=true;
	for (int i = 2; i<=N; i++)
	{
		if(prime[i]==false)
		{
			for(int j=2*i;j<=N;j+=i)
			{
				prime[j]=true;
			}
		}
	}
	for(int i=0;i<=N;i++)
	{
		if(prime[i]==false) v.push_back(i);
	}
	cout<<v.size();
   // for(auto i:v) cout<<i<<" ";
	
}

int main()
{
	long long  n;
	cin >> n;
	seive(n);
} 
