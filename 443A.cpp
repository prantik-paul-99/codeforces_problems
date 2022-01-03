#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[26];
    
    for(int i = 0 ; i < 26; i++){
        arr[i] = 0;
    }
    
    char temp;
    cin>>temp;
    cin>>temp;
    while(temp!='}')
    {
        arr[temp-97] = 1;
        cin>>temp;
        if(temp == '}') break;
        cin>>temp;
    }
    int count = 0;
    for(int i = 0 ; i < 26; i++){
        if(arr[i]==1) count++;
    }
    cout<<count;
}

