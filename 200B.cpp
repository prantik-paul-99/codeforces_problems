#include <bits/stdc++.h>

using namespace std;

int main()
{
    long double drinks, total=0;
    
    cin>>drinks;
    
    for(double i=0; i<drinks; i++)
    {
        long double temp;
        cin>>temp;
        total+=temp;
    }
    cout<<total/drinks;
}

