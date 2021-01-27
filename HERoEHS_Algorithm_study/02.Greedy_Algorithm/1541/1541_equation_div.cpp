#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int numbers;
    string tmp_equation;
    vector<string> number_box;
    string equation;

    cin >> equation;
    tmp_equation.clear();

    for(int i=0;i<equation.size();i++){
        if(equation[i] == '+'){
            number_box.push_back(tmp_equation);
            tmp_equation.clear();
            continue;
        }
        else if(equation[i] == '-'){
            number_box.push_back(tmp_equation);
            tmp_equation.clear();
            continue;
        }
        else{
            tmp_equation += equation[i];
        }
        if(i == equation.size()-1){
            number_box.push_back(tmp_equation);
        }
    }

    sort(number_box.begin(), number_box.end());

    for(auto a : number_box){
        cout << a << " ";
    }

    cout << endl;

	return 0;
}