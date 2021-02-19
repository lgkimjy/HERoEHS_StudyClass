#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int main(){

	int N, M, A, B;
	pair<int, int> a1;
	priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > box;
	cin >> N >> M;

	for(int i=0; i<M; i++){
		cin >> A >> B;
		a1 = make_pair(A, B);
		box.push(a1);
	}

	for(int i=1; i<=N; i++){
		cout << i << endl;
	}

	return 0;
}
