#include <bits/stdc++.h>

using namespace std;

int main()
{
    int price, coins, count = 1;
    cin>>price>>coins;
    
    int total = price;
    
    while(true)
    {
        if(total%10 == 0 || (total-coins)%10 == 0) break;
        total+=price;
        count+=1;
    }
    cout<<count;
}

