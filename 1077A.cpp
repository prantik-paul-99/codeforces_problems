#include<iostream>
#include<cmath>
using namespace std;
 
int main()
{
    long long int t,i,a,b,k;
    cin>>t;
    for (i=0;i<t;i++)
    {
        cin>>a>>b>>k;
        if (k%2)
        {
            cout<<(k+1)/2*a-(k-1)/2*b<<endl;
        }
        else cout<<k/2*(a-b)<<endl;
    }
}
