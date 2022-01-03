#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num, count = 0;
    cin>>num;
    
    for(int i = 0; i < num; i++)
    {
        string name;
        cin>>name;
        if(name=="Icosahedron")
        {
            count+=20;
        }
        else if(name=="Cube")
        {
            count+=6;
        }
        else if(name=="Tetrahedron")
        {
            count+=4;
        }
        else if(name=="Dodecahedron")
        {
            count+=12;
        }
        else if(name=="Octahedron")
        {
            count+=8;
        }
    }
    
    cout<<count;
    
}

