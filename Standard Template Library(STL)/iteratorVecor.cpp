/*  
 
 
 
 //2D vector,array of vector
 //row fixed,colum 
 
 
 #include <bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define mod 1000000007
#define endl '\n'
#define ha cout << "YES" << endl
#define na cout << "NO" << endl
#define mod 1000000007
#define ll long long
void printVector(vector<int>&v)
{
	cout<<"size="<<v.size()<<endl;
	for(int i=0;i<v.size();++i)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

 
 int main()
 {
	int n;
	cin>>n;
	vector<int>v[n];
	for(int i=0;i<n;i++)
	{
		int si;
		cin>>si;
		for(int j=0;j<si;j++)
		{
			int x;
			cin>>x;
			v[i].push_back(x);
	
		}

	}
	for(int i=0;i<n;++i)
	{
		printVector(v[i]);
	}
		
 }

    

  */
   
 
 
 
 //2D vector,vector of vector
 // fixed,colum 
 
 
 /* #include <bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define mod 1000000007
#define endl '\n'
#define ha cout << "YES" << endl
#define na cout << "NO" << endl
#define mod 1000000007
#define ll long long
void printVector(vector<int>&v)
{
	cout<<"size="<<v.size()<<endl;
	for(int i=0;i<v.size();++i)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

 
 int main()
 {
	int n;
	cin>>n;
	vector<vector<int>>v;
	for(int i=0;i<n;i++)
	{
		int si;
		cin>>si;

		vector<int>temp;

		for(int j=0;j<si;j++)
		{
			int x;
			cin>>x;
			temp.push_back(x);
	
		}
		v.push_back(temp);

	}
	v[0].push _back(10);
	for(int i=0;i<n;++i)
	{
		printVector(v[i]);
	}
	cout<<v[0][2];
		
 }
 */



//                                                 iterator
//		                        	----------------------------------------

#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define mod 1000000007
#define endl '\n'
#define ha cout << "YES" << endl
#define na cout << "NO" << endl
#define mod 1000000007
#define ll long long
#define pb push_back
int main()
{
	int n;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.pb(x);

	}
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;

	vector<int>::iterator it; //declared
	for(it=v.begin();it!=v.end();++it)
	{
		cout<<*it<<" ";
	}
	cout<<endl;


//advance() :- This function is used to increment the iterator position
// till the specified number mentioned in its arguments
vector<int>::iterator ptr=v.begin();
advance(ptr,2);         //iterat 3 no. position
cout<<*ptr<<endl;


//next() :- This function returns the new iterator that the iterator 
//would point after advancing the positions mentioned in its arguments


 //prev() :- This function returns the new iterator that the iterator would 
 //point after decrementing the positions mentioned in its arguments.






 vector<int>::iterator pt=v.begin();
 vector<int>::iterator ft=v.end();
 auto i=next(pt,3);
 auto j=prev(ft,3);
 cout<<*i<<" "<<*j<<endl;


 //inserter() :- This function is used to insert the elements at any position in the container.
 //It accepts 2 arguments, the container and iterator to positionwhere the elements have to be inserted.
 vector<int>f={1,2,3,4,5};
 vector<int>s={10,20,30};
 vector<int>::iterator itt=f.begin();
 advance(itt,3);
 copy(s.begin(),s.end(),inserter(f,itt));
 for(int &x:f)

 {
	cout<<x<<" ";
 }

}
    

