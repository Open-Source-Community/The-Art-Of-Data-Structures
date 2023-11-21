#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >>  n;
    map<string, set<string>> atlas;
    for(int i=0;i<n;i++)
    {
        string country,city;
        cin >> country >> city;
        atlas[country].insert(city);
    }
   for(auto i:atlas)
   {
       cout << i.first << endl;
       for(auto j:i.second)
       {
           cout << j << endl;
       }
   }
}