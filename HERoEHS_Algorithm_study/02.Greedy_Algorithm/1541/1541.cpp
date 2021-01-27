#include <iostream>
#include <vector>
using namespace std;

int main(){

    int numbers;
    string tmp_equation;
    vector<string> number_box;
    string equation;
    int idx, sum, count;

    cin >> equation;
    tmp_equation.clear();
    idx = 0;
    sum = 0;
    count = 0;

    for(int i=0;i<equation.size();i++){
        if(equation[i] == '+'){
            number_box.push_back(tmp_equation);
            tmp_equation.clear();
            continue;
        }
        else if(equation[i] == '-'){
            if(count == 0){
                idx = number_box.size()+1;
                count++;
            }
            number_box.push_back(tmp_equation);
            tmp_equation.clear();
            continue;
        }
        else{
            tmp_equation += equation[i];
        }
        /// push back last number
        if(i == equation.size()-1){
            number_box.push_back(tmp_equation);
        }
    }

    //cout << idx << endl;
    //for(auto a : number_box){
    //    cout << stoi(a) << " ";
    //}cout << endl;

    if(idx == 0){
        for(auto a : number_box){
            sum += stoi(a);
        }
    }
    else{
        for(int i=0; i<number_box.size(); i++){
            if(i<idx)
                sum += stoi(number_box[i]);
            else
                sum -= stoi(number_box[i]);
        }
    }
    cout << sum << endl;

	return 0;
}