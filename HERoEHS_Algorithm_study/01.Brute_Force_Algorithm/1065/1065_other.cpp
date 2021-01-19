#include <iostream>
using namespace std;

int main()
{
    int N, num, count, flag, tmp, diff;
    bool checker;

    count = flag = 0;
    cin>>N;

    for(int i=N; i>0; i--)
    {
        for(int j=i; j!=0;flag++)
        {
            num = j % 10;
            j /= 10;
            checker = true;
            if(flag == 0)
                tmp = num;
            else if(flag == 1)
            {
                diff = tmp - num;
                tmp = num;
            }
            else if(flag>=2 && diff != (tmp -num))
            {
                checker = false;
                break;
            }
        }
        if(checker==true)
            count++;
        flag=0;
    }
    cout<<count<<endl;

    return 0;
}