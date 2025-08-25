//                           sorted with key value
//                    ------------------------------------




#include <bits/stdc++.h>
using namespace std;
#define pi    acos(-1.0)
#define endl  '\n'
#define ha    cout<<"YES"<<endl
#define na    cout<<"NO"<<endl
#define mod   1000000007
#define ll    long long
#define pb    push_back


 void print(map<int,int>&m)
 {
   cout<<"key"<<" "<<"value"<<endl;
   map<int,int>::iterator it;
   for(it=m.begin();it!=m.end();it++)
   {
      cout<<it->first<<"  "<<it->second<<endl;
   }
   cout<<endl;
 }   

   
int main()
{
    map<int,int>m;
     //insert element
     m.insert({8,100});
     m.insert({2,20});
     m.insert({3,30});
     m.insert({4,40});
     m.insert({5,50});

     //another way
     m[6]=60;


     m.insert(pair<int,int>(7,70));

     //printing
     print(m);

  //assinging the element from m to mm
  //one map to another map
  map<int,int>mm(m.begin(),m.end());
  print(mm);


//erase element ,range
mm.erase(mm.begin(),mm.find(3));// // remove all elements up to element with key=3 in mm
print(mm);

//erase particular element
mm.erase(4); //remove all elements with key = 4
print(mm);

// Deleting the all map elements
m.clear();
  



//iterator map_name.insert(iterator position, {key, element})
//auto it = mp.find(key value);

//lower bound and upper bound for map m key = 5

cout<<"m.lower_bound(5)"<<" "<<endl;
cout<<"key="<<m.lower_bound(5)->first<<'\t';
cout<<"Element="<<m.lower_bound(5)->second<<endl;

cout<<"m.upper_bound(5)"<<" "<<endl;
cout<<"key="<<m.upper_bound(5)->first<<'\t';
cout<<"Element="<<m.upper_bound(5)->second<<endl<<endl;



}
 

//                    Check if a key is in the map
//             ------------------------------------------

/* 

void print(map<string,int>&m)
{
    map<string,int>::iterator it;
    cout<<"Key"<<" "<<"value"<<endl;
    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl;


    
    if(m.count("one")>0) ha;
    else na;

}
int main()
{
    map<string,int>m;

    //insert
    m["one"]=1;
    m["two"]=2;
    m["three"]=3;
    auto it=m.find("one");
    m.insert(it,{"alamgir",12});//insert
    //print
    print(m);


} */