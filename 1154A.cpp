#include <bits/stdc++.h>

using namespace std;

int main()
{
    int nums[4];
    int results[3];
    
    for(int i = 0; i < 4; i++)
    {
        cin>>nums[i];
    }
    for(int i = 0; i < 3; i++)
    {
        results[i] = 0;
    }
    
    sort(nums, nums+4);
    
    for(int i = 0; i < 3; i++)
    {
        results[i] = nums[3]-nums[i];
    }
    
    for(int i = 0; i < 3; i++)
    {
        cout<<results[i]<<" ";
    }
}

