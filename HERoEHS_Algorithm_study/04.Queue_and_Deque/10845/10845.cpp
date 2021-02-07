#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int main(){

    int N, data;
    queue<int> data_box;
    string command;
    vector<int> ans;

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> command;
        if(command == "push"){
            cin >> data;
            data_box.push(data);
        }
        else if(command == "pop"){
            if(data_box.empty()) ans.push_back(-1);
            else{
                ans.push_back(data_box.front());
                data_box.pop();
            }
        }
        else if(command == "size"){
            ans.push_back(data_box.size());
        }
        else if(command == "empty"){
            if(data_box.empty()) ans.push_back(1);
            else                 ans.push_back(0);
        }
        else if(command == "front"){
            if(data_box.empty()) ans.push_back(-1);
            else                 ans.push_back(data_box.front());
        }
        else if(command == "back"){
            if(data_box.empty()) ans.push_back(-1);
            else                 ans.push_back(data_box.back());
        }
    }

    for(auto a : ans){
        cout << a << endl;
    }

    return 0;

}