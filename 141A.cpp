#include <bits/stdc++.h>

using namespace std;

int main()
{
    string name1, name2, letters;
    cin>>name1>>name2>>letters;
    
    if(letters.length()!=name1.length()+name2.length())
    {
        cout<<"NO";
        return 0;
    }
    
    for(int i = 0; i < name1.length(); i++)
    {
        bool done = false;
        
        for(int j = 0; j < letters.length(); j++)
        {
            if(letters[j]==name1[i])
            {
                done = true;
                letters.erase(letters.begin()+j);
                break;
            }
        }
        if(!done)
        {
            cout<<"NO";
            return 0;
        }
    }
    
    for(int i = 0; i < name2.length(); i++)
    {
        bool done = false;
        
        for(int j = 0; j < letters.length(); j++)
        {
            if(letters[j]==name2[i])
            {
                done = true;
                letters.erase(letters.begin()+j);
                break;
            }
        }
        if(!done)
        {
            cout<<"NO";
            return 0;
        }
    }
    
    cout<<"YES";
    return 0;
    
}

