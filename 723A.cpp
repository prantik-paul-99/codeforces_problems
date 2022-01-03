#include <bits/stdc++.h>

using namespace std;

int main()
{
    int d1, d2, d3;
    int *arr = new int[3]();
    cin>>d1>>d2>>d3;
    arr[0] = d1;
    arr[1] = d2;
    arr[2] = d3;
    sort(arr, arr+3);
    int dist = 0;
    dist+=(arr[1]-arr[0]);
    dist+=(arr[2]-arr[1]);
    cout<<dist;
}

