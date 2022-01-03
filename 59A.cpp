#include <bits/stdc++.h>

using namespace std;

int main()
{
    string word;
    cin>>word;
    int uppercase_count = 0, lowercase_count = 0;
    
    for(int i = 0; i < word.length(); i++)
    {
        if(word[i]>='A'&&word[i]<='Z') uppercase_count++;
        else lowercase_count++;
    }
    if(uppercase_count>lowercase_count)
    {
        for(int i = 0; i < word.length(); i++)
        {
            if(word[i]>='a'&&word[i]<='z') word[i]-=32;
        }
    }
    else
    {
        for(int i = 0; i < word.length(); i++)
        {
            if(word[i]>='A'&&word[i]<='Z') word[i]+=32;
        }
    }
    cout<<word;
}
