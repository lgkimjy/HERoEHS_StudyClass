#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

	int N, time, greedy_sum, weight;
	vector<int> time_box;
	vector<int> each_idx;

	cin >> N;
	greedy_sum = 0;

	for(int i=0; i<N; i++){
		cin >> time;
		time_box.push_back(time);
	}

	sort(time_box.begin(), time_box.end());

	weight = time_box[0];
	each_idx.push_back(weight);

	for(int i=1; i<time_box.size(); i++){
		weight += time_box[i];
		each_idx.push_back(weight);
	}

	for(auto a : each_idx){
		// cout << a << " ";
		greedy_sum += a;
	}
	cout << greedy_sum << endl;
	
	return 0;
}
