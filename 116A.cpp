#include <bits/stdc++.h>

using namespace std;

int main()
{
    int stops;
    int capacity = 0;
    int temp = 0;
    
    cin>>stops;
    
    for(int i = 0; i < stops; i++)
    {
        int exiting, entering;
        
        cin>>exiting;
        cin>>entering;
        temp = temp-exiting+entering;
        if(temp>capacity) capacity=temp;
    }
    
    cout<<capacity;
}

