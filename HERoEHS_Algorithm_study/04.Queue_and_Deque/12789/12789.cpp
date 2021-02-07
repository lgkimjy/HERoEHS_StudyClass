#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main(){

    int N, num, count;
    bool ans;
    queue<int> numbers;
    stack<int> tmp;

    cin >> N;
    count = 1;
    ans = false;
    tmp.push(0);

    for(int i=0; i<N; i++){
        cin >> num;
        numbers.push(num);
    }

    for(; count!=N;){
        // cout << "numbers.front() : " << numbers.front() << " count : " << count  << "tmp : " << tmp.top() << endl;
        if(!numbers.empty()){
            if(numbers.front() == count){
                numbers.pop();
                count++;
            }
            else if(tmp.top() == count){
                tmp.pop();
                count ++;
            }
            else if(numbers.front() > count){
                tmp.push(numbers.front());
                numbers.pop();
            }
        }
        else if(numbers.empty()){
            if(tmp.top() == count){
                tmp.pop();
                count ++;
            }
            else if(tmp.top()-count>1){
                break;
            }
        }
    }

    ans = (count == N) ? true : false;

    if(ans) cout << "Nice" << endl;
    else    cout << "Sad" << endl;

    return 0;
}