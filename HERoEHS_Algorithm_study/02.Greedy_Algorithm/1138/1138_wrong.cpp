#include <iostream>
#include <vector>
using namespace std;

int main(){

    int N, seq, height;
    vector<int> seq_box;
    vector<int> height_box;
    int index;

    cin >> N;
    height_box.assign(N,0);
    index = 0;

    for(int i=0; i<N; i++){
        cin >> seq;
        seq_box.push_back(seq);
    }

    for(height=1; height<=N; height++){
        // index = seq_box[height_box[height-1]];
        index = seq_box[height-1];
        if(height_box[index] == 0){
            height_box[index] = height;
        }
        else{
            for(;height_box[index]!=0;index++){
                continue;
            }
            height_box[index] = height;
            index = 0;
        }
    }

    for(auto a : height_box){
        cout << a << " ";
    }cout << endl;

    return 0;
}
