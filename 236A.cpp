#include <bits/stdc++.h>

using namespace std;

int how_many_times_next(int pos, string s)
{
    int val =0;
    char c = s[pos];
    
    for(int i = pos+1; i< s.length(); i++)
    {
        if(s[i]==c)
        {
            val++;
        }
    }
    return val;
}

int main()
{
	string name;
	cin>>name;
	int val = 0;
	for(int i = 0; i<name.length(); i++)
	{
	    if(how_many_times_next(i,name)==0) val++;
	}
	
	if(val%2==1)
	{
	    cout<<"IGNORE HIM!";
	}
	else
	{
	    cout<<"CHAT WITH HER!";
	}
}
