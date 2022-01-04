#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin>>cases;
    vector<string> results;
    
    for(int i = 0; i < cases; i++)
    {
        int size;
        cin>>size;
        string tasklist;
        cin>>tasklist;
        vector<char> tasks;
        char prev_task = tasklist[0], curr_task;
        
        bool flag = false;
        
        for(int j = 1; j < size; j++)
        {
            curr_task = tasklist[j];
            if(curr_task!=prev_task)
            {
                if(find(tasks.begin(), tasks.end(),curr_task)!=tasks.end())
                {
                    results.push_back("NO");
                    flag = true;
                }
                else
                {
                    tasks.push_back(prev_task);
                    prev_task = curr_task;
                }
            }
            if(flag) break;
        }
        if(!flag) results.push_back("YES");
        
    }
    for(int i = 0; i < cases; i++)
    {
        cout<<results[i]<<endl;
    }
}
