#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    ifstream in1,in2;
    in1.open("country.txt");
    in2.open("capital.txt");
    for(int i=1;i<=10;i++)
    {
        if(in1.eof()!=0)
        {
            cout<<"exit from country"<<endl;
            exit(1);
        }
        string s;
        getline(in1,s);
        cout<<s<<endl;
        if(in2.eof()!=0)
        {
            cout<<"exit from capital\n";
            exit(1);
        }
        string s2;
        getline(in2,s2);
        cout<<s2<<endl;
    }
}
