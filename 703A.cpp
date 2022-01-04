#include <bits/stdc++.h>

using namespace std;

int main()
{
    int rounds;
    cin>>rounds;
    int mis_c = 0, chr_c = 0;
    
    for(int i = 0; i < rounds; i++)
    {
        int mis, chr;
        cin>>mis>>chr;
        if(mis>chr) mis_c++;
        else if( chr > mis ) chr_c++;
    }
    if(mis_c>chr_c) cout<<"Mishka";
    else if(chr_c>mis_c) cout<<"Chris";
    else cout<<"Friendship is magic!^^";
}
