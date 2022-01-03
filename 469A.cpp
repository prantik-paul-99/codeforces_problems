#include <bits/stdc++.h>

using namespace std;

bool does_pass(int arr[], int levels)
{
    for(int i = 1; i <= levels; i++)
    {
        if(arr[i] ==0) return false;
    }
    return true;
}

int main()
{
    int levels;
    cin>>levels;
    
    int arr[levels+1];
    
    for(int i =0; i<=levels; i++)
    {
        arr[i]=0;
    }
    
    int x_levels, y_levels;
    
    cin>>x_levels;
    
    for(int i = 0; i < x_levels; i++)
    {
        int level;
        cin>>level;
        arr[level]= level;
    }
    
    cin>>y_levels;
    
    for(int i = 0; i < y_levels; i++)
    {
        int level;
        cin>>level;
        arr[level]= level;
    }
    
    
    if(does_pass(arr, levels)) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
    
}

