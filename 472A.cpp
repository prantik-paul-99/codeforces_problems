#include <bits/stdc++.h>

using namespace std;

bool is_prime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}

int main()
{
    int num;
    cin>>num;
    
    int i = 3;
    num-=3;
    while(true)
    {
        if(!is_prime(num) && !(is_prime(i))) break;
        i+=1;
        num-=1;
    }
    cout<<i<<" "<<num;
}

