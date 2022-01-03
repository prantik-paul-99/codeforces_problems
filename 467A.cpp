#include <bits/stdc++.h>

using namespace std;

int main()
{
    int rooms, available = 0;
    
    cin>>rooms;
    
    for(int i = 0; i <rooms; i++)
    {
        int current, capacity;
        cin>>current;
        cin>>capacity;
        if((capacity-current)>=2) available++;
    }
    
    cout<<available;
}

