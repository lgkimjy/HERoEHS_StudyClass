#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int N, command;
	priority_queue<int, vector<int>, greater<int> > box;

	cin >> N;
	command = 0;

	for(int i=0; i<N; i++){
		cin >> command;
		if(command == 0){
			if(!box.empty()){
				cout << box.top() << endl;
				box.pop();
			}
			else cout << "0" << endl;
		}
		else box.push(command);
	}

	return 0;
}