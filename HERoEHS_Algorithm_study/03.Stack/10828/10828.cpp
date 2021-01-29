#include <iostream>
#include <vector>
#include <stack>
#include <cstring>
using namespace std;

int main(){

    int N, data;
    string command;
    stack<int> box;
    vector<int> result;

    cin >> N;

    for(int i=0; i<N; i++){
        cin>> command;

        if(command == "push"){
            cin >> data;
            box.push(data);
        }
        else if(command == "pop"){
            if(box.size()==0) result.push_back(-1);
            else{
                result.push_back(box.top());
                box.pop();
            }
        }
        else if(command == "empty"){
            if(!box.empty()) result.push_back(0);
            else             result.push_back(1);
        }
        else if(command == "size"){
            result.push_back(box.size());
        }
        else if(command == "top"){
            if(box.size()==0) result.push_back(-1);
            else              result.push_back(box.top());
        }
        else{
            cout << "wrong command" << endl;
        }
    }

    for(auto a : result){
        cout << a << endl;
    }
    
    return 0;
}