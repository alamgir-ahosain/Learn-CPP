
//o sqrt(n)

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			int count=0;
			while(n%i==0)
			{
				count++;
				n/=i;
			}
			cout<<i<<" ("<<count<<") *";
		} 
	}
	if(n>1) cout<<n<<" ("<<1<<")"<<endl;
} 



/* 

  **COunt The Factors

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, count = 0;
	cin >> n;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			count++;
			while (n % i == 0)
			{
				n /= i;
			}
		}
	}

	if (n > 1)
		count++;
	cout << count << endl;
}
 */