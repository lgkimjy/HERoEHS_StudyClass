#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

bool palindrome_checker(string Palindrome);

int main()
{
    string input, output;
    int count, shortest_condition;
    bool checker;

    cin >> input;

    output = input;
    shortest_condition = input.size() * 2;

    if(palindrome_checker(input) == false){
        for(int j=1; (input.size()-j)!=0 ; j++){
            output = input;
            for(int i=1; i<input.size()-j+1; i++){
                output += input[input.size()-j-i];
                // cout << output << endl;
                checker = palindrome_checker(output);
                if(checker == true){
                    count = output.size();
                }
            }
            if(count < shortest_condition)
                shortest_condition = count;
        }
    }
    else
        count = input.size();

    cout << count << endl;

    return 0;
}

bool palindrome_checker(string Palindrome){
    for(int i=0; i<(Palindrome.size()/2); i++){
        if(Palindrome[i] != Palindrome[Palindrome.size()-1-i]){
            // cout << Palindrome[i] << endl;
            // cout << Palindrome[Palindrome.size()-1-i] << endl;
            return false;
        }
    }
    return true;
}