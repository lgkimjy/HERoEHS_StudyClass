#include <iostream>
#include <vector>
using namespace std;

int main(){

	int N_person;
	vector<int> N_time;
	vector<int> total;

	cin >> N_person;

	for(int i=0; i<N_person; i++){
		cin >> N_time[i];
	}
	for(auto a : N_time){
		cout << a << endl;
	}

	// cout << "Tests";

	return 0;
}
