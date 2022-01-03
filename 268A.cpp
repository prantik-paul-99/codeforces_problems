#include<bits/stdc++.h>

using namespace std;
struct uniform{
    int h;
    int g;
};

vector<uniform> teams;

int main()
{
    int teams_num;
    cin>>teams_num;
    for(int i = 0; i < teams_num; i++)
    {
        int temp1, temp2;
        cin>>temp1>>temp2;
        uniform u = {temp1, temp2};
        teams.push_back(u);
    }
    
    int count = 0;
    
    for(int i = 0; i < teams_num; i++)
    {
        uniform u1 = teams[i];
        for(int j = 0; j < teams_num; j++)
        {
            if(j==i) continue;
            uniform u2 = teams[j];
            if(u1.h==u2.g) count++;
        }
    }
    
    std::cout << count << std::endl;
}

