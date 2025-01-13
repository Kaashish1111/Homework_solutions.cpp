// 2. Car Class:
// Challenge: Create a Car class that simulates the behavior of a vehicle.

// Attributes:
// model: String representing the car model name.
// year: Integer indicating the car's manufacturing year.
// fuelLevel: Double representing the remaining fuel quantity (percentage or liters).
// speed: Integer representing the current speed in kilometers per hour.
// isRunning: Boolean indicating whether the car is currently running.

// Methods:
// startEngine(): Sets isRunning to true and prints a starting message.
// topEngine(): Sets isRunning to false and prints a stopping message.
// accelerate(amount): Increases the car's speed by the specified amount (check engine state and fuel level).
// brake(amount): Decreases the car's speed by the specified amount (ensure speed doesn't become negative).
// refuel(amount): Increases the fuel level by the specified amount (check for tank capacity).
// printStatus(): Displays the car's model, speed, fuel level, and running state.

#include <iostream>
using namespace std;

class Car {
    private:
    string model;
    int year;
    double fuelLevel;
    int speed;
    bool isRunning;

    public:
    // Constructor to initialize the car's attributes
    Car(string m, int y, double fLevel,int s,bool iR){
        model = m;
        year = y;
        fuelLevel = fLevel;
        speed = s;
        isRunning = iR;
    }

    // Method to start the engine
    void startEngine(){
        isRunning = true;
        cout << "Engine started." << endl;
    }

    // Method to stop the engine
    void topEngine(){
        isRunning = false;
        cout << "Engine stopped." << endl;
    }

    // Method to accelerate the car
    void accelerate(int amount){
        if(isRunning){
            if(fuelLevel >= amount/10){
                fuelLevel -= amount/10;
                speed += amount;
                cout << "Accelerating by " << amount << " km/h." << endl;
            }
            else{
                cout << "Not enough fuel to accelerate." << endl;
            }
        }
        else{
            cout << "Car is not running. Cannot accelerate." << endl;
        }
    }

    // Method to brake the car
    void brake(int amount){
        if(isRunning){
            if(speed >= amount){
                speed -= amount;
                cout << "Braking by " << amount << " km/h." << endl;
            }
            else{
                speed = 0;
                cout << "Car has stopped." << endl;
            }
        }
        else{
            cout << "Car is not running. Cannot brake." << endl;
        }
    }

    // Method to refuel the car
    void refuel(int amount){
        fuelLevel += amount;
        cout << "Refueled by " << amount << " liters." << endl;
    }

    // Method to print the car's status
    void PrintCarStatus()
    {
        cout << "Car Status:" << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Fuel Level: " << fuelLevel << "%" << endl;
        cout << "Speed: " << speed << " km/h" << endl;
        cout << "Running: " << (isRunning? "Yes" : "No") << endl;
    }
};
int main(){
    Car myCar("Toyota", 2022, 70, 0, false);
    myCar.startEngine();
    myCar.accelerate(20);
    myCar.brake(10);
    myCar.refuel(5);
    myCar.PrintCarStatus();
    cout<<endl;
    myCar.topEngine();
    myCar.PrintCarStatus();
    return 0;
}