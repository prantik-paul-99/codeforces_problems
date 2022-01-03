#include <bits/stdc++.h>

using namespace std;

int main()
{
    int soldiers, seconds = 0;;
    cin>>soldiers;
    
    int arr[soldiers];
    
    for(int i =0; i<soldiers; i++)
    {
        int temp;
        cin>>temp;
        arr[i]=temp;
    }
    
    int min = *min_element(arr, arr + soldiers);
    int max = *max_element(arr, arr + soldiers);
    
    int min_pos, max_pos;
    
    for(int i = 0; i < soldiers; i++)
    {
        if(arr[i]==max)
        {
            max_pos = i;
            break;
        }
    }
    
    //cout<<max_pos<<endl;
    
    seconds+=max_pos;
    
    for(int i = max_pos; i > 0; i--)
    {
        int temp = arr[i];
        arr[i] = arr[i-1];
        arr[i-1] = temp;
    }
    
    for(int i = soldiers-1; i >= 0 ; i--)
    {
        if(arr[i]==min)
        {
            min_pos = i;
            break;
        }
    }
    //cout<<min_pos<<endl;
    seconds+=(soldiers-min_pos-1);
    
    for(int i = min_pos; i < soldiers-1; i++)
    {
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    
    // for(int i =0; i<soldiers; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    cout<<endl<<seconds;
}

