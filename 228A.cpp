#include <bits/stdc++.h>

using namespace std;

int arr[4];

bool is_not_distinct(int i)
{
    for(int j = 0; j < i; j++)
    {
        if(arr[j]==arr[i]) return true;
    }
    return false;
}

int main()
{
    int should_buy = 0;
    
    for(int i = 0; i < 4; i++)
    {
        cin>>arr[i];
        if(is_not_distinct(i)) should_buy++;
    }
    std::cout << should_buy << std::endl;
}

