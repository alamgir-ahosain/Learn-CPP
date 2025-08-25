/*                     QUEUE
                  Priority QUEUE

                 First In First Out
                      FIFO
         -----------------------------

enqueue(): Inserts an element at the end of the queue i.e. at the rear end.                        push()
dequeue(): This operation removes and returns an element that is at the front end of the queue.    pop()
front(): This operation returns the element at the front end without removing it.
rear(): This operation returns the element at the rear end without removing it.
isEmpty(): This operation indicates whether the queue is empty or not.
isFull(): This operation indicates whether the queue is full or not.
size(): This operation returns the size of the queue i.e. the total number of elements it contains.  */

#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define endl '\n'
#define ha cout << "YES" << endl
#define na cout << "NO" << endl
#define mod 1000000007
#define ll long long
#define pb push_back
#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);

int main()
{
  priority_queue<int> q;

  // push()
  q.push(1);
  q.push(3);
  q.emplace(4);

  // empty()
  if (!q.empty())
    cout << "Not Empty" << endl;

  // size
  cout << "size " << q.size() << endl;

  // top()
  // deafult vabe boro theke chuto  thake
  cout << "Boro Value " << q.top() << endl;

  // pop
  q.pop();

  cout << "Now boro value " << q.top() << endl;

  while (!q.empty())
  {
    cout << q.top() << " ";
    q.pop();
  }

  cout << endl;
  priority_queue<int, vector<int>, greater<int>> pq;
  pq.push(10);
  pq.push(30);
  pq.emplace(40);
  while (!pq.empty())
  {
    cout << pq.top() << " ";
    pq.pop();
  }
}
/* int main()
{
    fast;
 queue<int>q;
 ll int T;
   cin>>T;
   while(T--)
   {

 ll int n;
   cin>>n;
   if(n==1)
   {
     ll int val;
      cin>>val;
      q.push(val);

   }
   else if(n==2)
   {
      if(!q.empty()) q.pop();

      }

   else{
    if (!q.empty()) cout<<q.front()<<endl;
    else  cout<<"Empty!"<<endl;

}

}
} */
