#include <bits/stdc++.h>

using namespace std;

int main()
{
    string num1, num2, ans="";
    cin>>num1;
    cin>>num2;
    for(int i = 0; i < num1.length(); i++)
    {
        if(num1[i]!=num2[i]) ans+="1";
        else ans+="0";
    }
    cout<<ans;
}

