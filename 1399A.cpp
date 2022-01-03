#include <bits/stdc++.h>

using namespace std;


int main()
{
    int cases;
    cin>>cases;
    
    for(int i = 0; i < cases; i++)
    {
        int num;
        cin>>num;
        int arr[num];
        for(int i = 0; i < num; i++)
        {
            int el;
            cin>>el;
            arr[i] = el;
        }
        
        sort(arr, arr+num);
        bool det = true;
        for(int i = num-1; i > 0; i--)
        {
            if(arr[i]-arr[i-1]>1)
            {
                det = false;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(det) cout<<"YES"<<endl;
        
    }
    
}

