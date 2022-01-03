#include <bits/stdc++.h>

using namespace std;

int main()
{
    string bur, bir;
    cin>>bur;
    cin>>bir;
    if(bur.length()!=bir.length())
    {
        cout<<"NO";
        return 0;
    }
    
    for(int i = 0; i < bur.length(); i++)
    {
        if(!(bur[i]==bir[bur.length()-1-i]))
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}

