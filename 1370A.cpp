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
        
        if(size%2==1) size-=1;
        
        results.push_back(size/2);
    }
    for(int i = 0; i < cases; i++)
    {
        cout<<results[i]<<endl;
    }
    
}

