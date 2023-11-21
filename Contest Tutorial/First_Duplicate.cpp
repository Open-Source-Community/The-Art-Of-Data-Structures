#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >>  n;
    unordered_map<int,bool> check;
    bool found = false;
    int ans =0;
    for(int i=0; i<n;i++)
    {
        int inp;
        cin >> inp;
        if(!found) {
            if (check[inp])
            {
                ans = inp;
                found = true;
            }
            check[inp] = true;
        }
    }
    cout << ans << endl;

}