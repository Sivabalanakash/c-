#include <iostream>
using namespace std;

class Vehicle {
protected:
    string model;
    string registration_number;
    double speed;
    double fuel_capacity;
    double fuel_consumption;
public:
    Vehicle(string model, string registration_number, double speed, double fuel_capacity, double fuel_consumption) {
        this->model = model;
        this->registration_number = registration_number;
        this->speed = speed;
        this->fuel_capacity = fuel_capacity;
        this->fuel_consumption = fuel_consumption;
    }
  
    string getModel() { return model; }
    string getRegistrationNumber() { return registration_number; }
    double getSpeed() { return speed; }
    double getFuelCapacity() { return fuel_capacity; }
    double getFuelConsumption() { return fuel_consumption; }
    void setModel(string model) { this->model = model; }
    void setRegistrationNumber(string registration_number) { this->registration_number = registration_number; }
    void setSpeed(double speed) { this->speed = speed; }
    void setFuelCapacity(double fuel_capacity) { this->fuel_capacity = fuel_capacity; }
    void setFuelConsumption(double fuel_consumption) { this->fuel_consumption = fuel_consumption; }
 
    double fuelNeeded(double distance) {
        return (distance / 100) * fuel_consumption;
    }
    double distanceCovered(double time) {
        return speed * time;
    }
    void display() {
        cout << "Model: " << model << endl;
        cout << "Registration Number: " << registration_number << endl;
        cout << "Speed: " << speed << endl;
        cout << "Fuel Capacity: " << fuel_capacity << endl;
        cout << "Fuel Consumption: " << fuel_consumption << endl;
    }
};

class Bus : public Vehicle {
public:
    Bus(string model, string registration_number, double speed, double fuel_capacity, double fuel_consumption)
        : Vehicle(model, registration_number, speed, fuel_capacity, fuel_consumption) {}
};

class Truck : public Vehicle {
public:
    Truck(string model, string registration_number, double speed, double fuel_capacity, double fuel_consumption)
        : Vehicle(model, registration_number, speed, fuel_capacity, fuel_consumption) {}
};

class Transport {
public:
    static void main() {
       
        Bus bus("Volvo", "XYZ 123", 80.0, 200.0, 12.0);
        Truck truck("Scania", "ABC 456", 60.0, 300.0, 15.0);
        
      
        bus.display();
        cout << "Fuel Needed for 100 km: " << bus.fuelNeeded(100) << endl;
        cout << "Distance Covered in 2 hours: " << bus.distanceCovered(2) << endl;
        
        cout << endl;
        
        truck.display();
        cout << "Fuel Needed for 100 km: " << truck.fuelNeeded(100) << endl;
        cout << "Distance Covered in 2 hours: " << truck.distanceCovered(2) << endl;
    }
};

int main() {
    Transport::main();
    return 0;
}