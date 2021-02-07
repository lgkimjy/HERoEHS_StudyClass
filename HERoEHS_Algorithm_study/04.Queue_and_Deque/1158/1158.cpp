#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){

    int N, K, count;
    queue<int> data;
    vector<int> ans;

    cin >> N >> K;
    count = 1;

    for(int i=1; i<=N; i++){
        data.push(i);
    }

    for(; data.size()!=1;){
        data.push(data.front());
        data.pop();
        count ++;
        if(count == K){
            ans.push_back(data.front());
            data.pop();
            count = 1;
        }
    }
    ans.push_back(data.front());

    cout << "<";
    for(int i=0; i<ans.size(); i++){
        if(i == ans.size()-1) cout << ans[i]<<">"<<endl;
        else                  cout << ans[i] << ", ";
    }

    return 0;
}