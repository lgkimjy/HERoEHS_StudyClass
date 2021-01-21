#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

// index       0   1   2   3   4   5   6   7   8   9
// --------------------------------------------------------
// 1         - 0   1   1   1   1   1   1   1   1   1   - 10
// 10        -     1   2   3   4   5   6   7   8   9   - 9
// 100       -         1   3   6   10  15  21  28  36  - 8
// 1000      -             1   4   10  20  35  56  84  - 7
// 10000     -                 1   5   15  35  70  126 - 6
// 100000    -                     1   6   21  56  126 - 5
// 1000000   -                         1   7   28  84  - 4
// 10000000  -                             1   8   36  - 3
// 100000000 -                                 1   9   - 2
// 1000000000-                                     1   - 1

int main()
{
    int N, cnt, num;
    string ans;
    vector<int> tmp_cnt  = {0,1,1,1,1,1,1,1,1,1};
    vector<int> next_cnt = {1,1,1,1,1,1,1,1,1,1};

    cin >> N;
    cnt = 9;
    num = 1;

    if(N<10)
        cnt = N;
    else{
        for(long i=10; i<9876543210; i*=10){
            cout << i << " ";
            for(int j=num; j<10 ;j++){
                if(j==num){
                    next_cnt[j+1] = 1 + tmp_cnt[j];
                    // cout << next_cnt[j] << " ";
                    cnt +=next_cnt[j];
                }
                else{
                    next_cnt[j+1] = tmp_cnt[j] + next_cnt[j];
                    // cout << next_cnt[j] << " ";
                    cnt+=next_cnt[j];
                }
            }
            // cout << "total : " << cnt << endl;
            tmp_cnt = next_cnt;
            next_cnt = {1,1,1,1,1,1,1,1,1,1};
            num++;
        }
    }

    cout << cnt << endl;

    return 0;
}