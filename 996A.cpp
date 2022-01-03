#include <bits/stdc++.h>

using namespace std;

int main()
{
    int dollars;
    cin>>dollars;
    
    int count = 0;
    
    int arr[5] = { 100, 20, 10, 5, 1 };
    
    for(int i = 0; i < 5; i++ )
    {
        int bill = arr[i];
        if(dollars>=bill)
        {
            count+=(dollars/bill);
            dollars-=((dollars/bill)*bill);
        }
    }
    
    cout<<count;
}

