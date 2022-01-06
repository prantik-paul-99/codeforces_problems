#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin>>cases;
    vector< int > results;
    
    for(int i = 0; i < cases; i++)
    {
        int size;
        cin>>size;
        vector< int > s;
        for(int i = 0; i < size; i++)
        {
            int num;
            cin>>num;
            s.push_back(num);
        }
        
        sort(s.begin(), s.end());
        
        vector < int > diff;
        
        for(int i = 0; i < size-1; i++)
        {
            diff.push_back(s[i+1]-s[i]);
        }
        
        results.push_back(*min_element(diff.begin(), diff.end()));
    }
    
    for(int i = 0; i < cases; i++)
    {
        cout<<results[i]<<endl;
    }

    return 0;
}

