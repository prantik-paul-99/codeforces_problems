#include <bits/stdc++.h>

using namespace std;

int main()
{
    int *receivers;
    int friends;
    cin>>friends;
    
    receivers = new int(friends+1);
    
    for(int i = 1 ;i <= friends; i++)
    {
        int temp;
        cin>>temp;
        receivers[temp] = i;
    }
    for(int i = 1 ;i <= friends; i++)
    {
        cout<<receivers[i]<<" ";
    }
}

