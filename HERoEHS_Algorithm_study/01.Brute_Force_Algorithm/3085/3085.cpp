#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool line_checker(vector<vector<char>> box, int size);

int main(){

    int size, max;
    char candy;
    vector<char> candy_column;
    vector<vector<char>> candy_box;

    cin >> size;

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            cin >> candy;
            candy_column.push_back(candy);
        }
        candy_box.push_back(candy_column);
    }
    cout << candy_box[size-1][size-1] << endl;
    line_checker(candy_box, size);

    return 0;
}

bool line_checker(vector<vector<char>> box, int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            cout << box[i][j] << " ";
        }
        cout << endl;
    }
}