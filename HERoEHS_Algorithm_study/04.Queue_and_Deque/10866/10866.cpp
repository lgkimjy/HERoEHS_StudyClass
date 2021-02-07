#include <iostream>
#include <queue>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    int N, data;
    string command;
    deque<int> data_box;
    vector<int> ans;

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> command;
        if(command == "push_front"){
            cin >> data;
            data_box.push_front(data);
        }
        else if(command == "push_back"){
            cin >> data;
            data_box.push_back(data);
        }
        else if(command == "pop_front"){
            if(!data_box.empty()){
                ans.push_back(data_box.front());
                data_box.pop_front();
            }
            else ans.push_back(-1);
        }
        else if(command == "pop_back"){
            if(!data_box.empty()){
                ans.push_back(data_box.back());
                data_box.pop_back();
            }
            else ans.push_back(-1);
        }
        else if(command == "size"){
            ans.push_back(data_box.size());
        }
        else if(command == "empty"){
            if(!data_box.empty())  ans.push_back(0);
            else                   ans.push_back(1);
        }
        else if(command == "front"){
            if(!data_box.empty())  ans.push_back(data_box.front());
            else                   ans.push_back(-1);
        }
        else if(command == "back"){
            if(!data_box.empty())  ans.push_back(data_box.back());
            else                   ans.push_back(-1);
        }
    }

    for(auto a : ans){
        cout << a << endl;
    }cout << endl;

    return 0;
}