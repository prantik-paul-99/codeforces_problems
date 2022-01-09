#include <bits/stdc++.h>

using namespace std;

int main()
{
    int friends, bottles, capacity, limes, slices, salt, toast_cap, toast_salt;
    
    cin>>friends>>bottles>>capacity>>limes>>slices>>salt>>toast_cap>>toast_salt;
    
    int count = 0;
    
    int total_capacity = bottles*capacity;
    int total_slices = limes*slices;
    
    toast_cap = friends*toast_cap;
    toast_salt = friends*toast_salt;
    
    while(true)
    {
        if((total_capacity-toast_cap)>=0 && (salt-toast_salt)>=0 && total_slices>=friends)
        {
            total_capacity-=toast_cap;
            salt-=toast_salt;
            total_slices-=friends;
            count++;
        }
        else break;
    }
    
    cout<<count<<endl;
}
