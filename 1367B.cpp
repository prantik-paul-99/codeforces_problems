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
        int even_fault = 0, odd_fault = 0;
        for(int j = 0; j < size; j++)
        {
            int num;
            cin>>num;
            if(j%2 == 0 && !(num%2 ==0)) even_fault++;
            else if(j%2 == 1 && !(num%2 ==1)) odd_fault++;
        }
        if(even_fault==odd_fault) results.push_back(even_fault);
        else results.push_back(-1);
    }
    for(int i = 0; i < cases; i++)
    {
        cout<<results[i]<<endl;
    }
}
