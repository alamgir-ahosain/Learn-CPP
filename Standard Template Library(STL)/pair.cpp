#include <bits/stdc++.h>
using namespace std;
int main()
{

    pair<int, int> p;
    /*   p.first = 100;
        p.second = 200;
        //another
        p=make_pair(100,200);

        */

    pair<int, int> p2(100, 200);
    cout << p2.first << " " << p2.second << endl;

    // assing p2 to p
    p = p2;
    cout << p.first << " " << p.second << endl;

    //swap
    pair<int ,int>p3(10,200);
    p.swap(p3);
    cout << p.first << " " << p.second << endl;

    cout <<"p= "<< p.first << " " << p.second << endl;
    cout<<"p2= "<<p2.first<<" "<<p2.second<<endl;
    cout<<"p3= "<<p3.first<<" "<<p3.second<<endl;
    
      //'==' operation
      //first and second must be equal
    if(p3==p2) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;


      //first check first value if condition true then check second value


    //'!='
      if(p!=p2) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    //'>='
    if(p>=p2) cout<<"YES"<<endl;
    else cout<<"No"<<endl;





    






}