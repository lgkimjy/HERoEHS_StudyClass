#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
    int N, count, flag, num, length;
    vector<int> v;
    vector<int> tmp_v;

    cin >> N;
    flag = 0;
    count = 0;

    for(int i=10; count!=N; i++){
        length = to_string(i).length();
        v.clear();
        for(int j=length; j>=1; j--){
            num = i % (int)pow(10, j) / (int)pow(10, j-1);
            v.push_back(num);
        }
        tmp_v = v;
        sort(v.begin(), v.end(), greater<int>());

        for(int j=0; j<v.size()-1; j++){
            if(v[j]!=tmp_v[j])
            {
                break;
            }
            else{
                cout << i << " " << v[j] << " " << tmp_v[j] << endl;
                flag++;
            }
        }
        if(flag == length-1)
            count ++;
        flag = 0;
    }

    return 0;
}