#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(int a, int b){
    return a > b;
}

int main(){

    int N;
    int num;
    vector<int> nums;

    cin >> N;
    for(int i=0; i<N; i++){
        cin >> num;
        nums.push_back(num);
    }

    sort(nums.begin(), nums.end(), compare);

    for(int i=0; i<N; i++){
        cout << nums[i] << endl;
    }

    return 0;
}