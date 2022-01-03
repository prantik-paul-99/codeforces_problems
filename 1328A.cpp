#include<bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    
    cin>>cases;
    int arr[cases];
    
    for(int i = 0; i < cases; i++)
    {
        int a, b;
        cin>>a>>b;
        
        int count;
        if(a%b != 0)  count = (b*((a/b)+1))-a;
        else count = 0;
        arr[i] = count;
    }
    for(int i = 0; i < cases; i++)
    {
        cout<<arr[i]<<endl;
    }
}

