#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

int main(){

    int count;
    string brackets;
    char pre_i;
    stack<char> bar;

    cin >> brackets;
    count = 0;

    for(int i=0; i<brackets.size(); i++){
        if(brackets[i] == *"("){
            bar.push(brackets[i]);
            pre_i = brackets[i];
        }
        else if(brackets[i] == *")" && pre_i == *"("){
            bar.pop();
            count += bar.size();
            pre_i = brackets[i];
        }
        else if(brackets[i] == *")" && pre_i == *")"){
            bar.pop();
            count += 1;
            pre_i = brackets[i];
        }
    }
    cout << count << endl;

    return 0;
}