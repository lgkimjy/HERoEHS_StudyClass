#include <iostream>
#include <stack>
#include <vector>
#include <cstring>
using namespace std;

int main(){

	int T, flag;
	string brackets;
	vector<string> brackets_box;
	vector<string> ans;
	stack<char> checker_box;
	char tmp;

	cin >> T;
	flag = 0;

	for(int i=0; i<T; i++){
		cin >> brackets;
		brackets_box.push_back(brackets);
		// cout << brackets_box[i] << endl;
	}

	for(int i=0; i<T; i++){
		if(brackets_box[i].size()%2 == 1) ans.push_back("NO");
		else{
			for(int j=brackets_box[i].size()-1; j>(brackets_box[i].size()/2-1); j--){
				checker_box.push(brackets_box[i][j]);
			}
			for(int j=brackets_box[i].size()/2-1; j>=0 ;j--){
				tmp = brackets_box[i][j];
				cout << "i : " << i << " " << tmp << " " << checker_box.top() << endl;
				if(tmp != checker_box.top()){
					checker_box.pop();
				}
				else{
					checker_box.pop();
					ans.push_back("NO");
					flag = 1;
					break;
				}
			}
			if(flag != 1) ans.push_back("YES");
			flag = 0;
		}
	}

	for(auto a : ans){
		cout << a << endl;
	}

	// if( bracket_box.size()%2 == 1 ) return 0;

	// for(int i=bracket_box.size()-1; i>(bracket_box.size()/2-1); i--){
	// 	checker_box.push(bracket_box[i]);
	// 	cout << bracket_box[i] << " ";
	// }cout << endl;

	return 0;
}
