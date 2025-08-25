
/*
#include<iostream>
using namespace std;
int main()
{

    int a,b;
    cout<<"Enter two number ";
    cin>>a>>b;
    int x=a-b;
    try
    {
        if(x!=0)
        {
            cout<<1.0*a/b<<endl;


        }
        else
        {
            throw(x);
            cout<<"through";
        }
    }
    catch(...)
    {
        cout<<"Can't Devide"<<endl;
    }
}
*/
#include<bits/stdc++.h>
using namespace std;
void divide(int x,int y,int z)
{
    cout<<"inside the func.\n";
    if((x-y)!=0)
    {
        int r=z/(x-y);
        cout<<"result: "<<r<<endl;
    }
    else
    {
        throw(x-y);
    }
}
int main()
{
    try
    {
        divide(10,20,30);
        divide(10,10,20);
    }
    catch(int i)
    {
        cout<<"cought\n";
    }
}


























