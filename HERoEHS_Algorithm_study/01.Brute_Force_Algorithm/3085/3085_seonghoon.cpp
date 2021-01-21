#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int main() {
    int a;
    cin >> a;
    string input;
    vector< vector<int> > C, P, Z, Y;
    for(int i = 0; i < a; i++){
        cin >> input;
        vector<int> v;
        C[i].push_back(1);
        P[i].push_back(0);
    }
    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
            cout << C[i][j];
        }
        cout << endl;
    }
    return 0;
}