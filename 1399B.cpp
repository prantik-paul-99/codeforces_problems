#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin>>cases;
    vector<unsigned long long> results;
    
    for(int i = 0; i < cases; i++)
    {
        int gifts;
        cin>>gifts;
        
        vector<unsigned long long> candies;
        vector<unsigned long long> oranges;
        
        for(int j = 0; j < gifts; j++)
        {
            unsigned long long num;
            cin>>num;
            candies.push_back(num);
        }
        for(int j = 0; j < gifts; j++)
        {
            unsigned long long num;
            cin>>num;
            oranges.push_back(num);
        }
        
        unsigned long long min_candy = *min_element(candies.begin(), candies.end());
        unsigned long long min_orange = *min_element(oranges.begin(), oranges.end());
        
        unsigned long long count = 0;
        
        unsigned long long decrease_candy, decrease_orange;
        
        for(int j = 0; j < gifts; j++)
        {
            decrease_candy = candies[j] - min_candy;
            decrease_orange = oranges[j] - min_orange;
            if(decrease_orange>decrease_candy) count+=decrease_orange;
            else count+=decrease_candy;
        }
        
        results.push_back(count);
    }
    
    for(int i = 0; i < cases; i++)
    {
        cout<<results[i]<<endl;
    }
}

