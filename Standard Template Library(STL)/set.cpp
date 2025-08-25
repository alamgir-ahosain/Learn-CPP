//    set

// strored element with sorted and unique

#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define endl '\n'
#define ha cout << "YES" << endl
#define na cout << "NO" << endl
#define mod 1000000007
#define ll long long
#define pb push_back
void print(set<int, greater<int>> &s)
{
  for (int val :s)
  {
    cout << val << " ";
  }
  cout << endl;
  for (auto it = s.begin(); it != s.end(); it++)
  {
    cout << (*it) << " ";
  }
}

int main()
{
  //                                 SET
  //                        ---------------------

  /*    set<string>s;    //declared
     //insert    Time complexity log(n)
     s.insert("abc");
     s.insert("ghe");
     s.insert("def");
     s.insert("abc");
     auto it=s.find("abc");  //Time complexity log(n)
     if(it!=s.end())
     {
      cout<<(*it)<<endl;
     }
     //erase
    // s.erase("def");

    print(s);
   */

  /*



  //                           Unorderd SET
  //                    ------------------------

    //where check element  present or NOt ,using unordered set
    //insert,find-> Time Complexity O(1)
    unordered_set<string>ss;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
      string str;
      cin>>str;
      ss.insert(str);
    }
    int T;
    cin>>T;
    while(T--)
    {
  string str;
  cin>>str;
  if(ss.find(str)==ss.end()) na;
  else ha;
    }

   */
  //                     SET insert in Descending Order

  set<int, greater<int>> s;
  for (int i = 0; i < 3; i++)
  {
    int x;
    cin >> x;
    s.insert(x);
  }
  s.insert(100);
  print(s);
}
