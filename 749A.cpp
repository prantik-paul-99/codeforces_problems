#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}

int main()
{
    int num;
    cin>>num;
    
    vector< int > results;
    
    if(num%2==1)
    {
        num-=3;
        results.push_back(3);
    }
    while(true)
    {
        if(num==0) break;
        results.push_back(2);
        num-=2;
    }
    
    cout<<results.size()<<endl;
    for(int i = 0; i < results.size(); i++)
   {
       cout<<results[i]<<" ";
   }
}
