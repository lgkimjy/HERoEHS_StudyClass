#include <iostream>
#include <stack>
#include <vector>
#include <cstring>
using namespace std;

bool VPS_checker(string data);

int main(){

	int T, flag;
	bool ans;
	string brackets;
	vector<string> brackets_box;

	cin >> T;
	ans = true;

	for(int i=0; i<T; i++){
		cin >> brackets;
		brackets_box.push_back(brackets);
	}

	for(int i=0; i<T; i++){
		ans = VPS_checker(brackets_box[i]);
		if (ans == true) cout << "YES" << endl;
		else 					 cout << "NO" << endl;
	}

	return 0;
}

bool VPS_checker(string data){

	int size;
	stack<string> checker_box;
	
	size = data.size();

	for(int i=0; i<data.size(); i++){
		if(data[i] == *"("){
			checker_box.push("(");
		}
		else if(data[i] == *")"){
			if(checker_box.size() == 0){
				return false;
			}
			checker_box.pop();
		}
	}
	if(checker_box.size() != 0) return false;
	else 						return true;
}