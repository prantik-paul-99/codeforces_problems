#include <bits/stdc++.h>

using namespace std;

int main()
{
    int magnets, groups=1;
    string mag_pos;
    
    cin>>magnets;
    cin>>mag_pos;
    
    for(int i = 1; i < magnets; i++)
    {
        string temp;
        cin>>temp;
        if(mag_pos[1]==temp[0]) groups++;
        mag_pos =temp;
    }
    cout<<groups;
}

