#include<iostream>
using namespace std;
 
int main()
{
    int n;
    string str;
    int x = 0;
    cin>>n;
    for (int i = 0; i<n ;i++)
    {
        cin>>str;
        for(int j = 0; j<3; j++)
        {
            if(str[j]=='+')
            {
                x++;
                break;
            }
            if(str[j]=='-')
            {
                x--;
                break;
            }
        }
    }
 
    cout<<x;
}
