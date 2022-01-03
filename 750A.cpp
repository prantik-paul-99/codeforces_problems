#include <bits/stdc++.h>

using namespace std;


int main()
{
    int problems, minutes, count = 0;
    cin>>problems>>minutes;
    
    int solve_time = 240-minutes;
    
    for(int i = 1; i <= problems; i++)
    {
        solve_time-=(5*i);
        if(solve_time<0) break;
        count++;
    }
    
    cout<<count;
    
    
}

