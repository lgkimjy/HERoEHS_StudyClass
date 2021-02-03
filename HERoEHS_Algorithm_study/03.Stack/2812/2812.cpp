#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

int main(){

    int K, N, coord_1, coord_2;
    char largest;
    string number;
    vector<char> ans;
    stack<char> data;

    cin >> N >> K;
    cin >> number;
    
    coord_1 = 1;
    largest = '0';
    coord_2 = N-K;

    for(;(N-K)!=ans.size();){
        for(int j=coord_1; j<number.size(); j++){
            cout << coord_1 << " " << coord_2 << " ";
            if(number[j] > largest && j < coord_2){
                data.push(number[j]);
                largest = data.top();
                if(j==0) coord_1 = 1;
                else coord_1 = j+1;
            }
            cout << largest << endl;
        }
        ans.push_back(data.top());
        largest = 0;
        coord_2 ++;
        cout << "---- ---" << endl;
    }

    for(auto a : ans){
        cout << a << " ";
    }cout << endl;

    return 0;
}