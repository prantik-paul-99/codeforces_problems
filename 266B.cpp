#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num, moments;
    string sequence;
    cin>>num;
    cin>>moments;
    cin>>sequence;
    
    for(int i = 0; i < moments; i++)
    {
        for(int j=0; j<num-1; j++)
        {
            if(sequence[j]=='B'&&sequence[j+1]=='G')
            {
                sequence[j]='G';
                sequence[j+1]='B';
                j++;
            }
        }
    }
    cout<<sequence;
}

