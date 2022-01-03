#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int count = 0;
    std::vector<int> vect;
    for(int i = 0; i < n; i++)
    {
        int amnt;
        cin>>amnt;
        vect.push_back(amnt);
    }
    sort(vect.begin(), vect.end());
    for(int i = 0; i < n-1; i++)
    {
        count+=(vect[n-1]-vect[i]);
    }
    cout<<count;
}

