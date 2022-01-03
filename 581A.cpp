#include <bits/stdc++.h>

using namespace std;


int main()
{
    int fashionable = 0, ordinary = 0;
    
    int red, blue;
    cin>>red>>blue;
    
    while(true)
    {
        if(red>=1&&blue>=1)
        {
            fashionable+=1;
            red-=1;
            blue-=1;
        }
        else if(red>1)
        {
            ordinary+=1;
            red-=2;
        }
        else if(blue>1)
        {
            ordinary+=1;
            blue-=2;
        }
        
        if(red<=1&&blue==0 || red==0&&blue<=1) break;
    }
    
    cout<<fashionable<<" "<<ordinary;
    
}

