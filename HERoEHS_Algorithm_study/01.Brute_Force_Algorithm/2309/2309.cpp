#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int height, height_sum;
    int i, j, flag, diff;
    vector<int> dwarf;

    height_sum = 0;
    flag = 0;

    for(i=0; i<9; i++){
        cin>>height;
        dwarf.push_back(height);
        height_sum += dwarf[i];
    }

    for(i=0; i<dwarf.size(); i++)
        cout<<dwarf[i]<<endl;

    for(i=0; i<9; i++)
    {   
        for(j=0; j<9; j++){
            if(i != j)
            {
                diff = height_sum - dwarf[i] - dwarf[j];
                if(diff == 100){
                    // cout<<"checkr : "<<diff<<" "<<i<<" "<<j<<endl;
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 1)
            break;
    }
    if(i>j){
        dwarf.erase(dwarf.begin()+i);
        dwarf.erase(dwarf.begin()+j);
    }
    else
    {
        dwarf.erase(dwarf.begin()+j);
        dwarf.erase(dwarf.begin()+i);
    }
    
    sort(dwarf.begin(), dwarf.end());
    for(i=0; i<dwarf.size(); i++)
        cout<<dwarf[i]<<endl;

    return 0;
}