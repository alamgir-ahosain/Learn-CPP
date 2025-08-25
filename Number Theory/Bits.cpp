#include <bits/stdc++.h>
using namespace std;
#define pi    acos(-1.0)
#define edl  '\n'
#define ha    cout<<"Yes"<<endl
#define na    cout<<"No"<<endl
#define mod   1000000007
#define ll    long long
#define pb    push_back
#define ppb   pop_back
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);

void printBinary(int n)
{
    cout<<"Binary Representation: "<<n<<" "<<endl;
    for(int i=10;i>=0;--i) {
     cout<<((n>>i)&1);
    }
    cout<<endl;

}


int main()
{
   int n;
   cin>>n;
   printBinary(n);

   /* //check i^th bit set or not
   int i=3;
   if(n&(1<<i)!=0) cout<<"set"<<endl;
   else cout<<"Not Set"<<endl;

   //bit set 
   printBinary(n|(1<<2));

   //Not
   printBinary(~n);

   //bit unset
   printBinary(n&(~1<<i));


   //toogle
   printBinary(n^(1<<2));
   printBinary(n^(1<<i));

//rightmost element set or not
int cnt =n&~(n-1);



//no. of set bit
int cnt=0;
for(int i=10;i>=0;--i)
{
if(9&(1<<i)!=0) cnt++;
}
cout<<cnt<<endl;

//inbuilt funtion
cout<<__builtin_popcount(n)<<endl;//for integer
cout<<__builtin_popcountll((1LL<<35)-1)<<endl;// for long long 
 */

//odd even check
//odd number, 0^th bit always 1
if(n&1) cout<<"Odd"<<endl;
else cout<<"Even"<<endl;



//multiply/divided by 2
cout<<(n>>1)<<endl;     // n/2
cout<<(n<<1)<<endl;     // n*2


 
//Uppercase TO Lowercase and Vice Virsa
/* for(char c='A' ;c<='E';c++)
{
    cout<<c<<endl;
    printBinary(int(c));
}
for(char c='a' ;c<='e';c++)
{
    cout<<c<<endl;
    printBinary(int(c));
} */
//       A=00001000001
//       a=00001100001
char A='A';
char a=A|(1<<5);
cout<<a<<endl;
cout<<char(a&(~(1<<5)))<<endl;
cout<<char(1<<5)<<endl;//space print korbe

cout<<char('C'|' ')<<endl;//up to low
cout<<char('c'&'_')<<endl;//low to up


//clear LSB
printBinary(n);
int j=4;//clear 4^th bit
int b=(n&(~((1<<(j+1))-1)));
printBinary(b);

//power of 2
if(n&(n-1)==0) cout<<n<<" Power of 2"<<edl;
else cout<<n<<" Not Power of 2"<<edl;




/* 


                          SWAP Two Number
                    --------------------------    
    a,b

a=a^b        a=a^b
b=b^a        b=b^a^b=a
a=a^b        a=a^b^a=b


a1=a^b
b1=b^a1
a1=b1^a1




                         delete duplicate element..using XOR
                     --------------------------------------------    

a^a=0        a^a^a=a           0^a=a


  int ans=0;
  for(int i=1;i<=11;i++){
   int x;
   cin>>x;
   ans^=x;
  }
  cout<<ans;


*/





}   
  /*            Every integer appear twice ,two element appear one  find the two element
                         ------------------------------------------------- 


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pi acos(-1.0)
#define edl '\n'
#define ha cout << "YES" << edl
#define na cout << "NO" << edl
#define mod 1000000007
#define all (v.begin(), v.end())
#define pb push_back
#define ppb pop_back

const int M = 1e9 + 7;
//*check two val for (len-1)
void solve()
{


8
1 1 2 2 4 4 5 7



all array xor=5^7=
             101
             111
           -----  
             2=010
             1st bit set and different ,,
             so jader 1st bit set tara ekta group
             r bakira alada group
        xor=     7 3 3 2 2=7
        xor=     5 1 1 4 4=5


  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int val = 0;
  for (int i = 0; i < n; i++)
  {
    val ^= a[i];
  }
  // find rightmost set bit
  int cnt = 0;
  while (val)
  {
    if (val & 1)
      break;
    cnt++;
    val = val >> 1;
  }
  int x = 0, y = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] & (1 << cnt))
    {
      x = x ^ a[i];
    }
    else
      y = y ^ a[i];
  }
  cout << x << " " << y;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int Testc = 1;
  // cin >> Testc;
  for (int i = 1; i <= Testc; i++)
  {
    solve();
  }
}


 */

/* 


                            Given n integer ,print the X-or all subset
                         -------------------------------------------------   
                         if n=1 will  be a problem
Example:
 1 2 3

 1=0
 2 =2
 3=3
 1 2=2
 1 3=2
 2 3=1
 1 2 3=0
 { }
 -----
  no. of subset=2^n=8


  Answer always be Zerro,,because every element apper in even no. of times




    
    
    
    
                                    Generate all the subset
                                 --------------------------------  


      0 1 2 <-bit index
array=3 2 4
  
  2 1 0
 --------- 
 0|0 0 0={}
 1|0 0 1={3}
 2|0 1 0={2}
 3|0 1 1={3,2}
 4|1 0 0={4}
 5|1 0 1={3,4}
 6|1 1 0={2,4}
 7|1 1 1={3,2,4}




#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
   int a[n];
   for (int i = 0; i < n; i++)
      cin >> a[i];
   int num = (1 << n) - 1;
   for (int i = 0; i <= num; i++)
   {
      vector<int> v;
      for (int j = 0; j < n; j++)
      {
         if (i & (1 << j))
            v.push_back(a[j]);
      }
      for (auto k : v)
         cout << k << " ";
      cout << endl;
      v.clear();
   }
}








 */