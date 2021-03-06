#include <iostream>
#include <vector>
#include <iomanip>
#include <cstring>
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
    int flag, digit, index, tmp_ans;
    string ans;
    vector<int> tmp_cnt  = {0,1,1,1,1,1,1,1,1,1};
    vector<int> next_cnt = {1,1,1,1,1,1,1,1,1,1};

    cin >> N;
    flag = 0;
    cnt = 9;
    num = 1;
    tmp_ans = 0;

    if(N < 10)
        ans = to_string(N);
    else if(N == 0)
        ans = "0";
    else if(N == 1022)
        ans = "9876543210";
    else if(N >1022)
        ans = "-1";
    else{
        for(long i=10; i<9876543210; i*=10){
            // cout << i << " ";
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

                if(cnt >= N){
                    flag = 1;
                    index = j;
                    digit = i;
                    break;
                }
            }
            if(flag == 1)
                break;
            // cout << "total : " << cnt << endl;
            tmp_cnt = next_cnt;
            next_cnt = {1,1,1,1,1,1,1,1,1,1};
            num++;
        }
    }

    cout << index << " * " << digit << " - " << cnt-N << endl;
    // cout << cnt << endl;
    if(cnt-N == 0){
        for(int i=0; digit>0 ;){
            tmp_ans += index * digit;
            index -= 1;
            digit /= 10;
        }
    }
    cout << tmp_ans << endl;

    return 0;
}