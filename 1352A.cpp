#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin>>cases;
    
    vector<int> counts;
    vector<vector<string>> results;
    
    for(int i = 0; i < cases; i++)
    {
        vector<string> res_ind;
        int count = 0;
        string num;
        cin>>num;
        for(int i = 0; i < num.length(); i++)
        {
            string temp="";
            if(num[i]!='0')
            {
                count++;
                temp+=num[i];
                for(int j = i; j < num.length()-1; j++)
                {
                      temp+='0';
                }
            }
            res_ind.push_back(temp);
        }
        counts.push_back(count);
        results.push_back(res_ind);
    }
    for(int i = 0; i < cases; i++)
    {
        cout<<counts[i]<<endl;
        for(int j = 0; j < results[i].size(); j++)
        {
            cout<<results[i][j]<<" ";
        }
        cout<<endl;
    }
}

