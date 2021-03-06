#include <iostream>
#include <vector>
using namespace std;

int find_the_lowest_fuel_price(vector<int> a);

int main(){

    int N, road_length, fuel_price, lowest_fuel;
    vector<int> roads;
    vector<int> fuels;
    int payment, cumualte_roads, flag, tmp, k;


    // initialize
    payment = 0;
    lowest_fuel = 0;
    tmp = 0;
    cumualte_roads = 0;

    // input 
    cin >> N;
    for(int i=0; i<N-1; i++){
        cin >> road_length;
        roads.push_back(road_length);
    }
    for(int i=0; i<N; i++){
        cin >> fuel_price;
        fuels.push_back(fuel_price);
    }

    // algorithm / logic
    lowest_fuel = find_the_lowest_fuel_price(fuels);
    // cout << "lowest_fuel price : " << lowest_fuel << endl;

    for(int i=0; i<N-1; i++){
        if(fuels[i] == lowest_fuel){
            for(int j=i; j<(N-1); j++){
                cumualte_roads+=roads[j];
            }
            // cout << cumualte_roads << endl;
            payment = payment + (cumualte_roads * fuels[i]);
            break;
        }
        if(fuels[i] > fuels[i+1]){
            payment = payment + (fuels[i] * roads[i]);
        }
        else if(fuels[i] <= fuels[i+1]){
            for(k=i; k<N; k++){
                if(fuels[i] <= fuels[k]){
                    cumualte_roads+=roads[k];
                }
            }
            cout << "k : " << k << endl;
            payment = payment + (fuels[i] * cumualte_roads);
            cumualte_roads = 0;
            i=k-3;
        }
    }

    //  output
    cout << payment << endl;

	return 0;
}


// function
int find_the_lowest_fuel_price(vector<int> fuel){
    long index;
    index = 1000000000;
    for(int i=0; i<fuel.size()-1; i++){
        if(index > fuel[i]){
            index = fuel[i];
        }
    }

    return index;
}

/*
5
2 2 2 2
2 4 1 3 5
*/