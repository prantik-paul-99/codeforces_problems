#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    
    for(int i = 0; i < m; i++)
    {
        cout<<"#";
    }
    cout<<endl;
    
    for(int i = 2; i < n; i++)
    {
        if(i%2==1)
        {
            for(int i = 0; i < m; i++)
            {
                cout<<"#";
            }
        }
        else if(i%4 == 0)
        {
            cout<<"#";
            for(int i = 0; i < m-1; i++)
            {
                cout<<".";
            }
        }
        else if(i%2 == 0)
        {
            for(int i = 0; i < m-1; i++)
            {
                cout<<".";
            }
            cout<<"#";
        }
        cout<<endl;
    }
    
    for(int i = 0; i < m; i++)
    {
        cout<<"#";
    }
}

