#include <iostream>
#include <vector>
using namespace std;

int main()
{

    long long max_price, sum, N, road_length, fuel_price;
    vector<long long> roads;
    vector<long long> fuels;

	cin >> N;
    max_price = 1000000000;
    sum = 0;

    for(int i=0; i<N-1; i++){
        cin >> road_length;
        roads.push_back(road_length);
    }
    for(int i=0; i<N; i++){
        cin >> fuel_price;
        fuels.push_back(fuel_price);
    }

	for (int i=0; i<(N-1) ; i++)
	{
		if (fuels[i] < max_price)
			max_price = fuels[i];
		sum += max_price * roads[i];
	}

	cout << sum  << endl;;

    return 0;
}
