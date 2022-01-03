#include <bits/stdc++.h>

using namespace std;

int main()
{
    int val = 0;
    int matrix_val;
    
    for (int i = 0; i < 5; i++)
    {
        for (int j=0; j < 5; j++)
        {
            cin>>matrix_val;
            if(matrix_val==1)
            {
                if(i>2)
                {
                    val+=(i-2);
                }
                else if(i<2)
                {
                    val+=(2-i);
                }
                if(j>2)
                {
                    val+=(j-2);
                }
                else if(j<2)
                {
                    val+=(2-j);
                }
            }
        }
    }
    
    std::cout << val << std::endl;

    return 0;
}
