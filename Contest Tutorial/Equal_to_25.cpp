#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >>  n;
    unordered_map<int,bool> x;
    bool occured = false;
    for(int i=0;i<n;i++)
    {
        int inp;
        cin >> inp;
        if(x[inp])
        {
            occured = true;
        }
        x[25 - inp ] = true;
    }
    if(occured)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}