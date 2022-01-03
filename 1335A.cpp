#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num, count;
    cin>>num;
    
    int arr[num];
    
    for(int i = 0; i < num; i++)
    {
        int candies;
        cin>>candies;
        
        if(candies<=2)
        {
            count = 0;
        }
        else if(candies%2==0)
        {
            count = candies/2 - 1;
        }
        else
        {
            count = (candies-1)/2;
        }
        
        arr[i] = count;
    }
    
    for(int i = 0; i < num; i++)
    {
        cout<<arr[i]<<endl;
    }
}

