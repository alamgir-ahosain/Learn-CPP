#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> q;
    q.push_back(1);
    q.push_back(4);
    q.push_back(2);
    q.push_back(5);
    q.push_back(38);

    q.push_front(100);

    int size=q.size();
    cout<<"size="<<size<<endl;

    for(int i=0;i<size;i++)
    {
        //cout<<q[i]<<" ";
        cout<<q.at(i)<<" ";
    }
    cout<<endl;

    cout<<"first value "<<q.front()<<endl;
    cout<<"Last value "<<q.back()<<endl;
    q.pop_front();
     for(int i=0;i<q.size();i++)
    {
        cout<<q[i]<<" ";
       
    }
    cout<<endl;
    q.pop_back();
     for(int i=0;i<q.size();i++)
    {
        cout<<q[i]<<" ";
        
    }
    cout<<endl;
    //q.clear();

    //check deque empty or Not
    if(q.empty()) cout<<"Empty"<<endl;
    else cout<<"Not Empty"<<endl;

    //erase()
    deque<int>::iterator it,it2;
    it=q.begin();
    it2=q.begin()+3;
    q.erase(it);
    //erase()
    for(int i=0;i<q.size();i++) cout<<q[i]<<" ";
      cout<<endl;
      //erase()
      q.erase(q.begin()+2,q.begin()+4);
      for(int i=0;i<q.size();i++) cout<<q[i]<<" ";
      cout<<endl;

       deque<int>::iterator i ;
       i=q.begin();
       //insert
      q.insert(i,3);
      for(int i=0;i<q.size();i++) cout<<q[i]<<" ";
      cout<<endl;

      //insert 
      q.insert(i,3,5);
       for(int i=0;i<q.size();i++) cout<<q[i]<<" ";
      cout<<endl;

 

    




}