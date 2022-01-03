#include <bits/stdc++.h>

using namespace std;

int count_digit(char c, string year)
{
    int count=0;
    for(int i = 0; i < year.length(); i++)
    {
        if(year[i]==c) count++;
    }
    return count;
}

bool are_all_distinct_digits(string year)
{
    for(int i = 0; i < year.length(); i++)
    {
        if(count_digit(year[i],year)>1) return false;
    }
    return true;
}

int main()
{
    int year;
    cin>>year;
    while(true)
    {
        year+=1;
        if(are_all_distinct_digits(to_string(year)))
        {
            cout<<year;
            break;
        }
    }
}

