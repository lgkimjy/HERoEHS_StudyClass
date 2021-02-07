#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    int N, count_front, count_back, M, ans;
    deque<int> data, tmp, tmp_1, tmp_2;
    vector<int> coord;

    cin >> N >> M;
    count_back = count_front = ans = 0;
    
    for(int i=0; i<M; i++){
        int num; cin >> num;
        coord.push_back(num);
    }
    
    // initialize
    for(int i=1; i<=N; i++){
        data.push_back(i);
    }

    tmp = data;
    for(int i=0; i<coord.size(); i++)
    {
        // check from front
        while(coord[i] != data.front())
        {
            data.push_back(data.front());
            data.pop_front();
            count_front++;
        }
        data.pop_front();
        tmp_1 = data;

        // check from behind
        data = tmp;
        while(coord[i] != data.front())
        {
            data.push_front(data.back());
            data.pop_back();
            count_back++;
        }
        data.pop_front();
        tmp_2 = data;

        // which dir is minimized count
        if(count_back >= count_front){
            ans+=count_front;
            data = tmp_1;
        }
        else if(count_back < count_front){
            ans+=count_back;
            data = tmp_2;
        }
        count_back = count_front = 0;
        tmp = data;
    }

    cout << ans << endl;

    return 0;
}