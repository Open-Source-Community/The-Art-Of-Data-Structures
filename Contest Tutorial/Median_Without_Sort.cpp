#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >>  n;
    priority_queue<int> x;
    //push n/2  + 1 elements in the priority queue
    for(int i=0; i<n/2 + 1;i++)
    {
        int inp;
        cin >> inp;
        x.push(inp);
    }
    //take the rest of the input, if the top is bigger than the input, pop the top and insert the input.
    for(int i=n/2 + 1; i<n;i++)
    {
        int inp;
        cin >> inp;
        if(inp < x.top())
        {
            x.pop();
            x.push(inp);
        }
    }
    //at the end. the top of the priority queue will be the median.
    cout << x.top();
}