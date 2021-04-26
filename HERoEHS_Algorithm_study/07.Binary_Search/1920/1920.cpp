#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool binary_search(vector<int> box, int num);

int main(){

    int N, M, num, data;
    vector<int> num_box;
    vector<int> data_box;

    cin >> N;
    for(int i=0; i<N; i++){
        cin >> num;
        num_box.push_back(num);
    }
    sort(num_box.begin(), num_box.end());

    for(auto a : num_box){
        cout << a;
    }

    // cin >> M;
    // for(int i=0; i<M; i++){
    //     cin >> data;
    //     data_box.push_back(data);
    // }

    return 0;
}

bool binary_search(vector<int> N, int num){


    return false;
}
