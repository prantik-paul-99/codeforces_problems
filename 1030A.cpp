#include<iostream>
using namespace std;
 
int main()
{
    int n,i;
    cin >> n;
    int arr[n];
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for (i=0;i<n;i++)
    {
        if (arr[i]==1)
            break;
    }
    if (i==n)
        cout<<"EASY"<<endl ;
    else cout<<"HARD"<<endl;
 
    ///return 0;
}
