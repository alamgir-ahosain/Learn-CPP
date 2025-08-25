 /* 
/* 
                              STACK
                   ----LIFO( Last In First Out )

            push() to insert an element into the stack         -
            pop() to remove an element from the stack          Time COmplexity-O(1)
            top() Returns the top element of the stack.        -
            isEmpty() returns true if stack is empty else false.-
            size() returns the size of stack.                   -
 */

#include <bits/stdc++.h>
using namespace std;
#define pi    acos(-1.0)
#define endl  '\n'
#define ha    cout<<"YES"<<endl
#define na    cout<<"NO"<<endl
#define mod   1000000007
#define ll    long long
#define pb    push_back
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL); 
int main()
{
    fast;
  stack<int>st;
  ll int T;
   cin>>T;
   while(T--)
   {
  
   int n;
   cin>>n;
   if(n==1)
   {
     ll int val;
      cin>>val;
      st.push(val);
       
   }
   else if(n==2)
   {
      if(!st.empty()) st.pop();
    
      }
   
   else{
    if (!st.empty()) cout<<st.top()<<endl;
    else  cout<<"Empty!"<<endl;
     
  
       
   }

 }
}
   