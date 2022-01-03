#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cin>>num;
    
    vector<string> results;
    
    for(int i = 0; i < num; i++)
    {
        string b;
        cin>>b;
        string temp = "";
        temp+=b[0];
        for(int i = 1; i < b.length()-1; i+=2)
        {
            temp+=b[i];
        }
        temp+=b[b.length()-1];
        results.push_back(temp);
    }
    for(int i = 0; i < num; i++)
    {
        cout<<results[i]<<endl;
    }
}

