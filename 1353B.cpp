#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin>>cases;
    vector<int> results;
    for(int i = 0; i < cases; i++)
    {
        int num, swaps;
        cin>>num>>swaps;
        vector<int> a, b;
        for(int i = 0; i < num; i++)
        {
            int temp;
            cin>>temp;
            a.push_back(temp);
        }
        for(int i = 0; i < num; i++)
        {
            int temp;
            cin>>temp;
            b.push_back(temp);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());
        
        for(int i = 0; i <swaps; i++)
        {
            if(a[i]<b[i]) a[i]=b[i];
            else break;
        }
        
        int sum = 0;
        for(int i = 0; i < num; i++)
        {
            sum+=a[i];
        }
        results.push_back(sum);
    }
    
    for(int i = 0; i < cases; i++)
    {
        cout<<results[i]<<endl;
    }
}

