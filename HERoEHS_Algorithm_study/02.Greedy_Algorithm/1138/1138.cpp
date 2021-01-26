#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main(){

    int N, cards, sum, tmp;
    priority_queue<int, vector<int>, greater<int>> card_box;
    vector<int> trial;

    cin >> N;
    sum = 0;

    for(int i=0; i<N; i++){
        cin >> cards;
        card_box.push(cards);
    }

    for(int i=0; 1!=card_box.size(); i++){
        tmp = card_box.top();
        card_box.pop();
        card_box.push(tmp+card_box.top());
        trial.push_back(tmp+card_box.top());
        card_box.pop();
    }

    for(auto a : trial){
        // cout << a << " ";
        sum += a;
    }

    cout << sum << endl;

	return 0;
}