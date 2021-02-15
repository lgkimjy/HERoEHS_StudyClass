#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
	int N, command;
	vector<int> ans;
	priority_queue<int, vector<int>, greater<int> > box;

	cin >> N;
	ans.clear();

	for(int i=0; i<N; i++){
		cin >> command;
		if(command == 0){
			if(!box.empty()){
				ans.push_back(box.top());
				box.pop();
			}
			else ans.push_back(command);
		}
		else box.push(command);
	}

	for(auto a : ans){
		cout << a << endl;
	}cout << endl;

	return 0;
}