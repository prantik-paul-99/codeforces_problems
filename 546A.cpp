#include <bits/stdc++.h>

using namespace std;

int banana_price = 0;

int get_next_price(int current_amount)
{
    return banana_price*current_amount;
}


int main()
{
	int dollars, banana_amount;
	
	cin>>banana_price;
	cin>>dollars;
	cin>>banana_amount;
	int i;
	int current_price;
	
	for(i = 1; i <= banana_amount; i++)
	{
	    current_price = get_next_price(i);
	    if(current_price>dollars) break;
	    else
	    {
	        dollars-=current_price;
	    }
	}
	
	int val = 0;
	
	if(i>banana_amount)
	{
	    //cout<<"here"<<endl;
	    cout<<val;
	}
	else
	{
	    val+=(current_price-dollars);
	    for(int j = i+1; j <= banana_amount; j++)
	    {
	        val+=(get_next_price(j));
	    }
	    cout<<val;
	}
}
