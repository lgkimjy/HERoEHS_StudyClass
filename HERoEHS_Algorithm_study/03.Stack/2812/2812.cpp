#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

int main(){

    int K, N, coord, largest;
    string number;
    stack<char> box;

    cin >> N >> K;
    cin >> number;
    largest = 0;

    for(int i=N-K-2; i>-1; i--){
        cout << i << " ";
        // cout << stoi(number[i])<< endl;
        cout << number[i]<< endl;
        if(largest < stoi(number[i])){
            largest = stoi(number[i]);
        }
    }cout << endl;
    cout << largest << endl;

    return 0;
}