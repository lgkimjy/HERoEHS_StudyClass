#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

int main(){

    int N, stick_height, size;
    stack<int> checker;

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> stick_height;
        if(checker.size() == 0){
            checker.push(stick_height);
            continue;
        }
        size = checker.size();
        for(;;){
            if(checker.size() == 0 || checker.top() > stick_height ){
                checker.push(stick_height);
                break;
            }
            else if(checker.top() <= stick_height){
                checker.pop();
            }
        }
    }
    // cout << "size : " << checker.size() << endl;
    cout << checker.size() << endl;

    return 0;
}