#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

int main(){

    int K, N, coord, largest, num;
    string number;
    int num;
    char ascii;
    stack<char> box;

    cin >> N >> K;
    cin >> number;
    largest = 0;
    ascii = '0';

    for(int i=N-K; i>-1; i--){
        num = number[i] - ascii;
        if(largest < num){
            largest = num;
            coord = i;
        }
    }

    cout << largest << " " << coord << endl;
    
    for(int i=coord; (N-K)!=box.size(); i++){
        cout << number[i] << " ";
        if(box.size() == 0){
            box.push(number[i]);
            continue;
        }

        if(box.top() >= number[i]){
            box.push(number[i]);
        }
        else if(box.top() < number[i]){
            box.pop();
            box.push(number[i]);
        }
    }
    cout << box.size() << endl;
    while(!box.empty()){
        cout << box.top() << endl;
        box.pop();
    }

    return 0;
}