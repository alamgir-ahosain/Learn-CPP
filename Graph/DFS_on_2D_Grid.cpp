#include<bits/stdc++.h>
using namespace std;

bool vis[1000][1000];
int row,col;

bool isValid(int x,int y)
{
    if(x<1 || x>row|| y<1 ||y>col) return false;
    if(vis[x][y]) return false;
    return true;
}
void DFS(int x,int y)
{
vis[x][y]=1;
cout<<x<<" "<<y<<endl;
if(isValid(x-1,y)) DFS(x-1,y);
if(isValid(x,y+1)) DFS(x,y+1) ;
if(isValid(x+1,y)) DFS(x+1,y);
if(isValid(x,y-1)) DFS(x,y-1);

} 
int main()
{
   
    cin>>row>>col;
    DFS(1,1);
  

}