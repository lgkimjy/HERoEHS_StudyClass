#include <iostream>
#include <vector>
using namespace std;

int main(){

    int N, seq, height;
    vector<int> seq_box;
    vector<int> height_box;
    int count, ans;

    cin >> N;
    height_box.assign(N,11);
    count = 0;
    ans = 0;
 
    for(int i=0; i<N; i++){
        cin >> seq;
        seq_box.push_back(seq);
    }

    for(height=1; height<=N; height++){
        // cout << height << endl;
        count = seq_box[height-1];
        for(int i=0; i<seq_box.size(); i++){
            if(height_box[i] == 11){
                if(count == 0){
                    ans = i;
                    break;
                }
                else count--;
            }
        }
        // cout << "count : " << ans << " height : " << height << endl;
        height_box[ans] = height;
    }

    for(auto a : height_box){
        cout << a << " ";
    }cout << endl;

    return 0;
}