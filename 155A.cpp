#include <bits/stdc++.h>

using namespace std;


int main()
{
    int contests, count = 0;
    cin>>contests;
    
    vector<int> points;
    
    int point;
    cin>>point;
    
    int max = point, min = point;
    
    for(int i = 1; i < contests; i++)
    {
        cin>>point;
        if(point>max)
        {
            count+=1;
            max = point;
        }
        else if(point<min)
        {
            count+=1;
            min = point;
        }
    }
    
    cout<<count;
    
    
}

