#include <bits/stdc++.h>

using namespace std;

int get_limak_weight(int w)
{
    return w*3;
}
int get_bob_weight(int w)
{
    return w*2;
}
int main()
{
	int limak_weight, bob_weight, year=1;
	
	cin>>limak_weight;
	cin>>bob_weight;
	
	while(true)
	{
	    if(get_limak_weight(limak_weight)>get_bob_weight(bob_weight)) break;
	    else
	    {
	        limak_weight=get_limak_weight(limak_weight);
	        bob_weight = get_bob_weight(bob_weight);
	        year++;
	    }
	}
	std::cout << year << std::endl;
}
