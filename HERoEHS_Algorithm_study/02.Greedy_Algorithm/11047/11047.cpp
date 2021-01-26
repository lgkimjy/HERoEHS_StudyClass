#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

	int N, K, min_count;
    int coin_val, div;
	vector<int> coin_box;

	cin >> N >> K;
    div = 0;

	for(int i=0; i<N; i++){
		cin >> coin_val;
		coin_box.push_back(coin_val);
	}

	sort(coin_box.begin(), coin_box.end(), greater<int>());
    min_count = 0;

    for(int i=0; K!=0 || i<coin_box.size(); i++){
        if(coin_box[i] <= K){
            div = K / coin_box[i];
            min_count += div;
            K = K - (div * coin_box[i]);
        }
    }

    cout << min_count << endl;
	
	return 0;
}