#include <bits/stdc++.h>

using namespace std;

int main()
{
	int stones, val = 0;
	cin>>stones;
	char stone_color=' ',temp;
	for(int i = 0; i < stones; i++)
	{
	    cin>>temp;
	    if(temp==stone_color)
	    {
	        val+=1;
	    }
	    else
	    {
	        stone_color=temp;
	    }
	}
	cout<<val;
}
