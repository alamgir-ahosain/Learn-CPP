/*
N workers ase.
each work alada din kaj kore.
 */

#include <bits/stdc++.h>
using namespace std;
void printBinary(int n)
{
    cout << "Binary Representation: " << n << " " << endl;
    for (int i = 30; i >= 0; --i)
    {
        cout << ((n >> i) & 1);
    }
    cout << endl;
}
 int main()
{
    int n;
    cin >> n;
    vector<int> masks(n, 0);
    for (int i = 0; i < n; i++)
    {
        int num_workers;
        cin >> num_workers;
        int mask = 0;
        for (int j = 0; j < num_workers; j++)
        {
            int day;
            cin >> day;
            mask = (mask | (1 << day)); // set bit
        }
        masks[i] = mask;
    }
    for (int i = 0; i < n; i++)
    {
        cout << masks[i] << endl;
        printBinary(masks[i]);
    }
    int max_days=0;
    int p1=-1,p2=-1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int intersection = masks[i] & masks[j];
            int commonDays = __builtin_popcount(intersection);
          //  cout << "worker " << i + 1 << " worker " << j + 1 << " "   << "CommonDays" << commonDays << endl;
          if(commonDays>max_days)
          {
            max_days=commonDays;
            p1=i+1;
            p2=j+1;
          }
        }
    }
    cout<<p1<<" "<<p2<<" "<<max_days<<endl;
} 