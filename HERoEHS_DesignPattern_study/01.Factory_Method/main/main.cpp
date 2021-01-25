#include<iostream>
#include<vector>
using namespace std;

class Car
{
public:
	// Factory 함수 -> maekCar
	static Car *makeCar(int index);
	virtual void info() = 0;
};

class carSedan : public Car
{
public:
	void info() {
		cout << "sedan info" << endl;
	}
};

class carSUV : public Car
{
public:
	void info() {
		cout << "SUV info" << endl;
	}
};

Car* Car::makeCar(int index)
{
	if (index == 1){
		return new carSedan;
	}
	else if (index == 2){
		return new carSUV;
	}
}


int main()
{
	vector<Car*> data;
	int index;

	while (true)
	{
		cout << "carSedan(1) carSUV(2) END(0): ";
		cin >> index;

		if (index == 0){
			break;
		}

		data.push_back(Car::makeCar(index));
	}

	for (int i = 0; i < data.size(); i++){
		data[i]->info();
	}

	for (int i = 0; i < data.size(); i++){
		delete data[i];
	}
}