#include <bits/stdc++.h>

using namespace std;

int main()
{
    int lines;
    
    cin>>lines;
    
    for(int i = 0; i < lines; i++)
    {
        int a, b, c;
        cin>>a;
        cin>>b;
        cin>>c;
        
        if(a==b)
        {
            if(c%2==0) cout<<"yes"<<endl;
            else cout<<"no"<<endl;
        }
        else if(c==b)
        {
            if(a%2==0) cout<<"yes"<<endl;
            else cout<<"no"<<endl;
        }
        else if(c==a)
        {
            if(b%2==0) cout<<"yes"<<endl;
            else cout<<"no"<<endl;
        }
        else if(a==b+c || b==a+c || c==a+b) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        
    }
}

