#include <bits/stdc++.h>

using namespace std;


int main()
{
	int steps=0, distance;
	cin>>distance;
	
	for(int i = 5; i >0; i--)
	{
	    int temp= (distance/i);
	    steps+=temp;
	    distance-=(i*temp);
	    if(distance==0) break;
	}
	cout<<steps;
}
