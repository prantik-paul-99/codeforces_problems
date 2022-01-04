#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin>>cases;
    
    for(int i = 0; i < cases; i++)
    {
        double n, r;
        cin>>n>>r;
        if(r>ceil(n/2))
        {
            cout<<-1<<endl;
            continue;
        }
        else
        {
            for(int j = 0; j < n; j++)
            {
                for(int k = 0; k < n; k++)
                {
                    if(j==k && r>0 &&(j%2==0))
                    {
                        cout<<"R";
                        r-=1;
                    }
                    else cout<<".";
                }
                cout<<endl;
            }
        }
    }
}
