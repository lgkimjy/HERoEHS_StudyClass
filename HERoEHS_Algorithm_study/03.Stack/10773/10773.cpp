#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

int main(){

    int K, size;
    long long sum, num;
    stack<int> checker;

    cin >> K;
    sum = 0;

    for(int i=0; i<K; i++){
        cin >> num;
        if(checker.empty()){
            checker.push(num);
            sum += num;
            continue;
        }
        if(num == 0){
            sum -= checker.top();
            checker.pop();
        }
        else{
            checker.push(num);
            sum += num;
        }         
    }

    cout << sum << endl;

    return 0;
}