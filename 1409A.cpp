#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin>>cases;
    
    
    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    int results[cases];
    
    for(int i = 0; i < cases; i++)
    {
        results[i]=0;
    }
    
    for(int i = 0; i < cases; i++)
    {
        int count = 0;
        
        int a, b, temp;
        cin>>a>>b;
        if(a>b) temp = a-b;
        else temp = b-a;
        
        for(int j = 0; j <10; j++)
        {
            int val = arr[j];
            count+=(temp/val);
            temp-=((temp/val)*val);
            if(temp==0) break;
        }
        results[i] = count;
    }
    
    for(int i = 0; i < cases; i++)
    {
        cout<<results[i]<<endl;
    }
}

