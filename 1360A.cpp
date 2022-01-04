#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin>>cases;
    vector<int> results;
    
    for(int i = 0; i < cases; i++)
    {
        int a, b;
        cin>>a>>b;
        vector<int> temp;
        temp.push_back(a);
        temp.push_back(b);
        sort(temp.begin(), temp.end());
        if(temp[0]*2>=temp[1]) results.push_back(pow((temp[0]*2),2));
        //if(temp[1]*2>=temp[0]) results.push_back(temp[0]*temp[0]);
        else results.push_back(temp[1]*temp[1]);
    }
    for(int i = 0; i < cases; i++)
    {
        cout<<results[i]<<endl;
    }
}
