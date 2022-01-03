#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin>>cases;
    
    for(int i = 0; i < cases; i++)
    {
        int n;
        cin>>n;
        
        if(n%4!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            
            int temp = n/2;
            vector<int> vect;
            vect.push_back(2);
            for(int i = 1; i < temp; i++)
            {
                vect.push_back(vect[i-1]+2);
            }
            vect.push_back(1);
            for(int i = temp+1; i < n-1; i++)
            {
                vect.push_back(vect[i-1]+2);
            }
            vect.push_back(3*temp-1);
            
            for(int i = 0; i < n; i++)
            {
                cout<<vect[i]<<" ";
            }
            cout<<endl;
        }
    }
}

