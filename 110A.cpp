#include <bits/stdc++.h>

using namespace std;

bool is_lucky_number(string num)
{
    for(int i = 0; i < num.length(); i++)
    {
        if(!(num[i]=='4'||num[i]=='7'))
        {
            return false;
        }
    }
    return true;
}

int count_lucky_digits(string num)
{
    int count = 0;
    for(int i = 0; i < num.length(); i++)
    {
        if(num[i]=='4'||num[i]=='7')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    unsigned long long num;
    cin>>num;
    
    if(is_lucky_number(to_string(count_lucky_digits(to_string(num))))) cout<<"YES";
    else cout<<"NO";
}

