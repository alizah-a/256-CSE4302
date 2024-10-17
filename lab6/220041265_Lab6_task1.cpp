#include <iostream>

using namespace std;

class Car{

private:
    string make;Car operator+ (double fuel){
        if (fuellevel>fuelCapacity){
            fuelLevel = fuelCapacity;
        }
    }
    string model;
    double fuelCapacity;
    double fuelLevel;

public:
    Car(string manu ="", string mod ="", double cap = 0.0, double level= 0.0):
        make(manu), model(mod), fuelCapacity(cap), fuelLevel(level){

            fuelLevel = fuelCapacity;
    }

    Car operator+ (double fuel){
        if (fuelLevel>fuelCapacity){
            fuelLevel = fuelCapacity;
        }
    }
     Car operator- (double fuel){
        if (fuelLevel<0){
            fuelLevel = 0;
        }
    }
    Car operator+= (double fuel){
        if (fuelLevel>fuelCapacity){
            fuelLevel = fuelCapacity;
        }
    }
    Car operator== (Car& more){

    }

};

int main(){

   Car car1;



return 0;
}
