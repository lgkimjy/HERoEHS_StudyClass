#include <iostream>
#include <vector>
using namespace std;

int find_the_lowest_fuel_price(vector<int> a);

int main(){

    int N, road_length, fuel_price, lowest_fuel;
    vector<int> roads;
    vector<int> fuels;
    int payment, cumualte_roads, flag;


    // initialize
    payment = 0;
    lowest_fuel = 0;
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
    cout << "lowest_fuel : " << lowest_fuel << endl;

    for(int i=0; i<N; i++){
        cout << "i : " << i << endl;
        cumualte_roads = roads[i];
        for(int j=i+1; j<N; j++){
            if(fuels[i] > fuels[j]){
                payment += (fuels[i]*cumualte_roads);
                cout << payment << " ";
                i=j;
                break;
            }
            else if(fuels[i] == lowest_fuel){
                for(int k=i+1; i<N-1;k++){
                    cumualte_roads += roads[k];
                }
                cout << "cumulate_roads : " << cumualte_roads << endl;
                payment += cumualte_roads * fuels[i];
                i=N;
            }
            else if(fuels[i] <= fuels[j]){
                cumualte_roads += roads[j];
                cout << "cumulate_roads : " << cumualte_roads << endl;
            }
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