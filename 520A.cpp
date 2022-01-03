#include<bits/stdc++.h>

using namespace std;
struct uniform{
    int h;
    int g;
};

vector<uniform> teams;

int main()
{
    int chars;
    cin>>chars;
    
    string str;
    cin>>str;
    
    int arr[26];
    
    for(int i = 0; i < 26; i++)
    {
        arr[i] = 0;
    }
    
    for(int i = 0; i < chars; i++)
    {
        if(str[i]>96) arr[str[i]-97] = 1;
        else arr[str[i]-65] = 1;
    }
    
    for(int i = 0; i < 26; i++)
    {
        if (arr[i] == 0)
        {
            std::cout << "NO" << std::endl;
            return 0;
        }
    }
    cout<<"YES";
}

