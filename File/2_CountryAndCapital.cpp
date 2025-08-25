#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ofstream file;
  file.open("name.txt");
  file<<"Alamgir"<<endl;
  file<<"Mustakim"<<endl;
  file<<"Sagor"<<endl;
  file.close();
  ifstream inf;
  char s[80];
  inf.open("roll.txt");
  cout<<"name "<<endl;
  while(inf)
  {
      inf.getline(s,80);
      cout<<s<<endl;

  }
  inf.close();



}

