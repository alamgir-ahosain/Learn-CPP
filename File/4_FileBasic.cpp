
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    string name;
    ofstream file;
    file.open("basic.txt");
    cout<<"enter name ";
    getline(cin,name);
    file<<name<<endl;
    file.close();
    return 0;
}


/*
// file a add korle

#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    string name;
    ofstream file;
    file.open("basic.txt",ios::out|ios::app);
    cout<<"enter name";
    getline(cin,name);
    file<<name<<endl;
    file.close();
    return 0;
}
*/

/*
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    string name;
    int age;
    ofstream file;
    file.open("student.txt",ios::out|ios::app);
    for(int i=1; i<=3; i++)
    {
        cout<<"enter name ";
        getline(cin,name);
        file<<name<<"\t";
        cout<<"enter age ";
        cin>>age;
        file<<age<<endl;
        cin.ignore();
    }
    file.close();
}
*/

/*
// ---------------- Read from a file ___
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    string s;
    ifstream file("readFile.txt");
    while(getline(file,s))
    {

        cout<<s<<endl;

    }
    file.close();


}
*/





















