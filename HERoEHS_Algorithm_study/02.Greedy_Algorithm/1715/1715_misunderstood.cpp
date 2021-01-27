#include <iostream>
#include <vector>
#include <queue
#include <algorithm>
using namespace std;

int main(){

    int N, cards, sum;
    vector<int> card_box;
    vector<int> compare_times;

    cin >> N;
    for(int i=0; i<N; i++){
        cin >> cards;
        card_box.push_back(cards);
    }

    sort(card_box.begin(), card_box.end());
    sum = card_box[0];

    for(int i=1; i<card_box.size() ;i++){
        sum = sum + card_box[i];
        compare_times.push_back(sum);
        // cout << sum << " ";
    }
    // cout << endl;

    sum = 0;

    for(auto a : compare_times){
        cout << a << " ";
        sum += a;
    }

    cout << sum << endl;

	return 0;
}