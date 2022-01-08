#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin>>cases;
    
    vector< int > results;
    
    for(int i = 0; i < cases;i++)
    {
        int count = 0;
        string num;
        cin>>num;
        
        for(int j = 1; j <= 9; j++)
        {
            string n = to_string(j);
            
            if(num[0]==n[0])
            {
                for(int k = 1; k <= num.length(); k++)
                {
                    count+=k;
                }
                break;
            }
            count+=10;
        }
        
        results.push_back(count);
    }
    
    for(int i = 0; i < cases;i++)
    {
        cout<<results[i]<<endl;
    }
}

