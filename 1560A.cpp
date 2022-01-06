#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin>>cases;
    vector< int > results;
    
    for(int i = 0; i < cases; i++)
    {
        int k;
        cin>>k;
        
        int num = 0;
        string str;
        
        for(int i = 1; i < k+1; i++)
        {
            num++;
            str = to_string(num);
            while((num%3==0) || (str[str.length()-1]=='3')) 
            {
                num++;
                str = to_string(num);
            }
        }
        results.push_back(num);
    }
    for(int i = 0; i < cases; i++)
    {
        cout<<results[i]<<endl;
    }
    
}

