#include <bits/stdc++.h>

using namespace std;


int main()
{
    int events;
    cin>>events;
    
    int police = 0; int crimes = 0;
    
    for(int i = 0; i < events; i++)
    {
        int num;
        cin>>num;
        if(num==-1)
        {
            if(police==0) crimes+=1;
            else police-=1;
        }
        else police+=num;
    }
    cout<<crimes;
    
}

