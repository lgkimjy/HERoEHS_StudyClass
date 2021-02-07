#include <iostream>
#include <queue>
using namespace std;

int main(){

    int N;
    queue<int> data;

    cin >> N;

    for(int i=1; i<=N; i++){
        data.push(i);
    }

    for(;data.size()!=1;){
        data.pop();
        data.push(data.front());
        data.pop();
    }

    cout << data.front() << endl;

    return 0;
}