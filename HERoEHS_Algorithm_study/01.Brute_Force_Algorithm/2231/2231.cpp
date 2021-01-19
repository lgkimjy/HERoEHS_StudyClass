#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int decomposition, constructor;
    int num, flag;
    vector<int> every_digits;

    cin>>decomposition;
    flag = 0;

    for(int i=0; i<decomposition; i++)
    {   
        constructor = i;
        for(int j=to_string(i).length(); j>=1; j--)
        {
            num = i % (int)pow(10, j) / (int)pow(10, j-1);
            constructor += num;
        }
        if(constructor == decomposition){
            constructor = i;
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        cout<<constructor<<endl;
    else
        cout<<flag<<endl;

    return 0;
}