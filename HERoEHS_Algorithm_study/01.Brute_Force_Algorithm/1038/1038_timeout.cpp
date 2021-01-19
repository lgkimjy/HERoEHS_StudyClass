#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    int N, count, flag;
    string a;
    vector<string> stack;

    cin >> N;
    count = 0;
    flag = 0;

    for(int i=0; count != N ;i++){
        a = to_string(i);
        if(i>0 && i<10){
            count++;
            stack.push_back(a);
        }
        else{
            for(int j=0; j<(a.size()-1); j++){
                if((a[j] - a[j+1])>0)
                    flag++;
                if(flag == (a.size()-1)){
                    count++;
                    stack.push_back(a);
                }
            }
            flag = 0;
        }
    }

    // for(auto c : stack){
    //     cout << c << " ";
    // }
    cout << a << endl;
    
    return 0;
}