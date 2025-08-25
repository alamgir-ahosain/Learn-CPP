#include <bits/stdc++.h>
#include <vector>
using namespace std;
// vector<type>vector_name
int main()
{

   vector<int> v; // declare

   // get value
   v.push_back(1); // v[0];
   v.push_back(5); // v[1];
   v.push_back(3); // v[2];
   v.push_back(4);
   v.push_back(2);

   /*
       size of vector    vector_name.size()
       cout<<"size="<<v.size()<<endl;

    */

   /*    print vector value
     cout<<v[0]<<endl;
     cout<<v[1]<<endl;
     cout<<v[2]<<endl;
     cout<<v[3]<<endl;
     cout<<v[4]<<endl;
     //cout<<v[5]<<endl;
      */

   /*  //another way
    cout<<v.at(0)<<" ";
    cout<<v.at(1)<<" ";
    cout<<v.at(2)<<" ";
    //cout<<v.at(3);

    //if using v.at() declare kore out of range
    //ja sohojei vhul buja jabe..
    //cout<<v[] print kore garbage value print korbe
    //so v.at() use kora valo
 */

   /* // front(), first value ta ber kora jai
      cout<<endl<<v.front()<<endl; */

   /* //back(),last value ber kora jai
   cout<<v.back()<<endl;
    */

   /* //clear(),all vector  value delete  kore dibo
      //v.clear();
      // cout<<"clear function use korar por size : "<< v.size(); */

   /*
    //empty(),vector khali kina
    if(v.empty()) cout<<"empty"<<endl;
    else cout<<"not empty"<<endl;



     //pop_back(),last element delete kora jai
    v.pop_back();
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;



  /*  //erase(),jekono value delete kora jai
     //erase range...
      v.erase(v.begin()+start,v.end()+endPosition);
    v.erase(v.begin()+1); //2 no. index delete korbo
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.erase(v.begin()+2,v.end());
     for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    */

   // insert( ),jekono value add korte pare ,,jekono position a
   // push_back a only last a add korte pari

   /*
   v.insert(position,val);
   v.insert(position, no. of times, val);
   v.insert(first,last): It defines the range of elements which is to be inserted.





    v.insert(v.begin(),100);//first a 100 add korle
    for(int i=0;i<v.size();i++)
    {
     cout<<v[i]<<" ";
    } */

   /*  v.insert(v.begin(),2,5);//shurute 3 ta 5 add hobe
    for(int i=0;i<v.size();i++)
    {
     cout<<v[i]<<" ";
    } */

   // SWAP

   /*
      vector<int>a;
      a.push_back(10);
      a.push_back(20);
      a.push_back(30);

       vector<int>b;
      b.push_back(1);
      b.push_back(2);
      b.push_back(3);
      cout<<"before swappinf "<<endl;
      for(int i=0;i<a.size();i++)
      {
       cout<<a[i]<<" ";
      }
      cout<<endl;
     for(int i=0;i<b.size();i++)
      {
       cout<<b[i]<<" ";
      }
      swap(b,a);
      cout<<endl<<"after swappinf "<<endl;
      for(int i=0;i<a.size();i++)
      {
       cout<<a[i]<<" ";
      }
      cout<<endl;
     for(int i=0;i<b.size();i++)
      {
       cout<<b[i]<<" ";
      }  */

   // sort
   /*  sort(v.begin(),v.end());


    cout<<"before sorting"<<endl;
    for(int i=0;i<v.size();i++)
    {
     cout<<v[i]<<" ";
    }

   cout<<endl<<"after sorting"<<endl;
    for(int i=0;i<v.size();i++)
    {
     cout<<v[i]<<" ";
    } */

   // reverse
   /*
        cout<<"before sorting"<<endl;
      for(int i=0;i<v.size();i++)
      {
       cout<<v[i]<<" ";
      }



      reverse(v.begin(),v.end());

      cout<<endl<<"after reverse"<<endl;
      for(int i=0;i<v.size();i++)
      {
       cout<<v[i]<<" ";
      }
       */

   // iteration,pointer er moto||time complexity komay

   // declare
   vector<int>::iterator it;
   // it=v.begin();//fisrt value k point korse
   /*    for(it=v.begin();it!=v.end();it++)
      {
       cout<<*it<<" ";
      } */

   // Vector resize()

   /* Syntax
   Consider a vector v. Syntax would be:

   v.resize(n,val);
   Parameter   n : It is the new vector size. */

   // Vector capacity()
   /* Syntax

     Consider a vector 'v' and capacity 'c'. Syntax would be :
     int c=v.capacity();

   Parameter:It does not contain any parameter.


    vector<int> v{1,2,3,4,5};
       int c=v.capacity();
       cout<<"Capacity of the vector is :"<<c;

       Output:Capacity of the vector is :5

       vector copy;
       vector<int>v;
       v={1,3,4};
       vector<int>v2;
       v2=v;














      //C++ Vector assign()





      set<int>s;//set
      vector<int>v;
      v.assign(s.begin(),s.end());

   This function assigns new values to the vector and replacing the old ones.

   Syntax
   Consider a vector v to whom the value is to be assigned. Syntax would be :

   v.assign(first,last);
   v.assign(n,val);
   Parameter
   (first,last) :It defines the range.first is an input iterator pointing to the first element and last is an input iterator refering to the past the last element.

   n : Number of times the value to be occurred.


   vector<int> v{1,2,3,4,5};
       vector<int> v1;
       v1.assign(v.begin()+1,v.end()-1);
       for(int i=0;i<v1.size();i++)
       std::cout<<v1[i] <<std::endl;
       return 0;
   }
   Output:
   2
   3
   4













................for Unique 



vector<pair<string,int>>v;
v.pb({"alam",12});
v.pb({"alam",12});
v.pb({"alamgir",12});
v.pb({"alamir",12});
v.pb({"alamjk",12});
v.pb({"alamjk",12});
sort(v.begin(),v.end());
int sz=unique(v.begin(),v.end())-v.begin();
for(int i=0;i<sz;i++) cout<<v[i].first<<" "<<v[i].second<<edl;

Output:

alam 12
alamgir 12
alamjk 12

















    */
}