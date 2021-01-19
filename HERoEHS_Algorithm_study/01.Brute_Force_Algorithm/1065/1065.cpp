#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int N, num, ref_seq;
    bool checker;
    int count, length;
    vector<int> sequence;

    count = 0;
    cin>>N;

    for(int i=1; i<=N; i++){
        // check length of the number i
        length = to_string(i).length();
        sequence.clear();
        for(int j=length; j>=1; j--){
            // stack all the sequences data
            num = i % (int)pow(10, j) / (int)pow(10, j-1);
            sequence.push_back(num);
        }

        ref_seq = sequence[1] - sequence[0];
        checker = true;
        // cout<<ref_seq<<endl;
        for(int k = 2; k<sequence.size(); ++k){
            if(ref_seq != sequence[k]-sequence[k-1])
                checker = false;
                break;
        }
        if(checker == true)
            count++;
    }
    cout<<count<<endl;

    return 0;
}


// good resources so i will keep it

// int n <- 123;

// while(n){
//     int num = n % 10;
//     n /= 10;
// }

// num = 3
// n = 12

// num = 2
// n = 1

// num = 1
// n = 0
