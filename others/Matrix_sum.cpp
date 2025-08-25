#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum,a[2][2];
    int b[2][2];
     for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>a[i][j];//take a matrix
        }
        cout<<endl;
    }
     for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>b[i][j];//take b matrix
        }
        cout<<endl;
    }
    
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            sum=a[i][j]+b[i][j];////add two matrix
            cout<<" "<<sum;
        }
        cout<< endl;
    }

}