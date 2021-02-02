#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

int main(){

    int N, ans;
    string words, prev_words;
    stack<char> checker;

    cin >> N;
    ans = 0;

    for(int i=0; i<N; i++){
        cin >> words;

        for(int j=0; j<words.size(); j++){
            if(checker.size() == 0)            checker.push(words[j]);
            else if(checker.top() == words[j]) checker.pop();
            else if(checker.top() != words[j]) checker.push(words[j]);
        }
        if(checker.size()==0) ans++;
        for(int k=checker.size(); checker.size()!=0 ;k++) checker.pop();
    }

    cout << ans << endl;

    return 0;
}