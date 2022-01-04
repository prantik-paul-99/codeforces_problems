#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin>>cases;
    vector<int> results;
    
    for(int i = 0; i < cases; i++)
    {
        int x, y, n;
        cin>>x>>y>>n;
        results.push_back(x*((n-y)/x)+y);
    }
    for(int i = 0; i < cases; i++)
    {
        cout<<results[i]<<endl;
    }
}
