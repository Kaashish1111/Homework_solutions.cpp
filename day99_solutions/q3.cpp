// 3. Laptop Class:
// Challenge: Design a Laptop class that represents a portable computer system.

// Attributes:
// brand: String representing the laptop brand and model.
// screenSize: Double indicating the screen size in inches.
// processor: String specifying the processor type and speed.
// ram: Integer representing the available RAM capacity in gigabytes.
// storage: Integer representing the storage capacity in gigabytes.
// batteryLevel: Double showing the remaining battery percentage.
// isOn: Boolean indicating whether the laptop is currently powered on.

// Methods:
// powerOn(): Sets isOn to true and prints a startup message.
// powerOff(): Sets isOn to false and prints a shutdown message.
// openApps(numApps): Simulates opening a specified number of applications, potentially impacting battery life.
// closeApps(numApps): Simulates closing applications, restoring battery life.
// charge(amount): Increases the battery level by the specified amount (check for maximum capacity).
// printSpecs(): Displays the laptop's brand, screen size, processor, RAM, storage, and battery level.

#include <iostream>
using namespace std;

class laptop{
    private:
    string brand;
    double screenSize;
    string processor;
    int ram;
    int storage;
    double batteryLevel;
    bool isOn;

    public:
    laptop(string brand, double screenSize, string processor, int ram, int storage, double batteryLevel, bool isOn){
        brand = brand;
        screenSize = screenSize;
        processor = processor;
        ram = ram;
        storage = storage;
        batteryLevel = batteryLevel;
        isOn = isOn;
    }

    void powerOn(){
        isOn = true;
        cout << "Laptop " << brand << " powered on." << endl;
    }

    void powerOff(){
        isOn = false;
        cout << "Laptop " << brand << " powered off." << endl;
    }

    void openApps(int numApps){
        batteryLevel -= (numApps * 0.1);
        cout << "Opened " << numApps << " applications. Remaining battery level: " << batteryLevel << "%." << endl;
    }

    void closeApps(int numApps){
        batteryLevel += (numApps * 0.1);
        cout << "Closed " << numApps << " applications. Remaining battery level: " << batteryLevel << "%." << endl;
    }

    void charge(double amount){
        batteryLevel += amount;
        if(batteryLevel > 100){
            batteryLevel = 100;
        }
        cout << "Battery charged by " << amount << ". Remaining battery level: " << batteryLevel << "%." << endl;
    }

    void printSpecs(){
        cout << "Brand: " << brand << endl;
        cout << "Screen Size: " << screenSize << " inches" << endl;
        cout << "Processor: " << processor << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "Storage: " << storage << " GB" << endl;
        cout << "Battery Level: " << batteryLevel << "%" << endl;
        if(isOn){
            cout << "Status: On" << endl;
        } else {
            cout << "Status: Off" << endl;
        }
        cout << endl;
    }
};

int main(){
    laptop myLaptop("Lenovo", 15.6, "Intel Core i5-1135G7", 8, 128, 95, false);
    myLaptop.printSpecs();
    myLaptop.powerOn();
    myLaptop.openApps(5);
    myLaptop.charge(20);
    myLaptop.closeApps(3);
    myLaptop.printSpecs();
    myLaptop.powerOff();
    myLaptop.printSpecs();
    return 0;
}