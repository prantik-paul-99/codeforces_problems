#include <bits/stdc++.h>

using namespace std;

int main()
{
    int games, a_count = 0, d_count = 0;
    string winners;
    
    cin>>games;
    cin>>winners;
    
    for(int i = 0; i < winners.length(); i++)
    {
        if(winners[i]=='A') a_count++;
        else d_count++;
    }
    if(a_count>d_count) cout<<"Anton";
    else if(a_count<d_count) cout<<"Danik";
    else cout<<"Friendship";
}

