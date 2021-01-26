#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int N, count;
    int start_time, end_time, keypoint;
    vector<pair<int, int>> conferences;

    cin >> N;
    count = 1;

    for(int i=0; i<N; i++){
        cin >> start_time >> end_time;
        conferences.push_back(make_pair(end_time, start_time));
    }

    sort(conferences.begin(), conferences.end());
    // cout << conferences.size();

    keypoint = conferences[0].first;

    for(int i=1; i<conferences.size(); i++){
        // cout << i << " ";
        if(keypoint > conferences[i].first){
            // cout << "room is already in use";
            // continue;
        }
        else if(keypoint <= conferences[i].first){
            if(keypoint > conferences[i].second){
                // cout << "room is not finished using";
                // continue;
            }
            else if(keypoint <= conferences[i].second){
                keypoint = conferences[i].first;
                count++;
            }
        }
        // cout << endl;
    }

    cout << count << endl;

	return 0;
}