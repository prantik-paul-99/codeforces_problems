#include <bits/stdc++.h>

using namespace std;

int main()
{
    int friends, height;
    cin>>friends;
    cin>>height;
    
    int width = friends;
    
    for(int i = 0; i < friends; i++)
    {
        int h;
        cin>>h;
        if(h>height) width++;
    }
    
    std::cout << width << std::endl;
}

