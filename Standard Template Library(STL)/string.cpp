#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pi acos(-1.0)
#define edl '\n'
#define ha cout << "YES" << edl
#define na cout << "NO" << edl
#define mod 1000000007
#define all (v.begin(), v.end())
#define pb push_back
#define ppb pop_back

const int M = 1e9 + 7;
//*check two val for (len-1)
void solve()
{
   /* 





      .....................abcde..........
   prefix: a,ab,abc,abcd,abcde
  -------

   suffix:e,de,cde,bcde,abcde
  -------

   substring/subsequence->>any continious part
   ----------------------

   
   
  ...................For Unique Element............

    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int sz=unique(s.begin(),s.end())-s.begin();
    for(int i=0;i<sz;i++) cout<<s[i];
    cout<<edl; 

    */
   /*  int t;
    cin>>t;
    while(t--)
    {
        string s;
        char ch;
        cin>>ch;
        getline(cin,s);
        s=ch+s;
        cout<<s<<edl;
    } */
    string s;
    cin>>s;
    cout<<*max_element(s.begin(),s.end())<<edl;
    cout<<*min_element(s.begin(),s.end());







}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int Testc = 1;
  // cin >> Testc;
  for (int i = 1; i <= Testc; i++)
  {
    solve();
  }
}