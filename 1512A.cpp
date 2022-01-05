#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin>>cases;
    
    vector<int> results;
    
    for(int i = 0; i < cases; i++)
    {
        int size;
        cin>>size;
        vector< int > arr;
        for(int i = 0; i < size; i++)
        {
            int num;
            cin>>num;
            arr.push_back(num);
        }
        for(int i = 0; i < size; i++)
        {
            if(count(arr.begin(),arr.end(), arr[i])==1)
            {
                results.push_back(i+1);
                break;
            }
        }
    }
    for(int i = 0; i < cases; i++)
    {
        cout<<results[i]<<endl;
    }
}

