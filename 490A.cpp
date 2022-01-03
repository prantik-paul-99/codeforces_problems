#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int counts = 0;
    std::vector<int> vect;
    for(int i = 0; i < n; i++)
    {
        int skill;
        cin>>skill;
        vect.push_back(skill);
    }
    counts = count(vect.begin(), vect.end(), 1);
    for(int i = 2; i <=3; i++)
    {
        int temp = count(vect.begin(), vect.end(), i);
        if(temp<counts) counts=temp;
    }
    cout<<counts<<endl;
    
    vector<vector<int>> teams;
    for(int j = 0; j < counts ; j++)
    {
        vector<int> temp;
        for(int i = 1; i <= 3; i++)
        {
            for(int k = 0; k < n; k++)
            {
                if(vect[k]==i)
                {
                    vect[k]=0;
                    temp.push_back(k+1);
                    break;
                }
            }
        }
        teams.push_back(temp);
    }
    
    for(int i = 0; i < counts; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout<<teams[i][j]<<" ";
        }
        cout<<endl;
    }
}

