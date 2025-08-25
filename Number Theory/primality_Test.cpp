






/* #include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,f=0;
		cin>>n;
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0) {
			
				f=1;
				break;
			
			}
		}
		if(f==1) cout<<"Not Prime"<<endl;
		else cout<<"Prime"<<endl;
	}
} */




 #include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    if (n < 2)   return false;
    else if (n <= 3)  return true;
    else if (n % 2 == 0) return false;
    else
    {
        for (int i = 3; i <= sqrt(n); i += 2)
        {
            if (n % i == 0)  return false;
        }
        return true;
    }
}
int main()
{
    int t;
    cin >> t;
    if (prime(t) == true)   cout << "Prime" << endl;
    else  cout << "Not Prime" << endl;
}
 