#include <iostream>

#include <string>

#include <vector>
using namespace std;

class Car {

private:

  string licensePlate;

 string owner;

public:

  Car(std::string lp, std::string o)

  : licensePlate(lp), owner(o) {}

  string getLicensePlate() const {

     return licensePlate;

 }

  void display() const {

cout << "License Plate: " << licensePlate << ", Owner: " << owner << endl;

  }

};

class ParkingLot {

private:

  vector<Car> parkedCars;

  int capacity;

public:

  ParkingLot(int cap)

    : capacity(cap) {}

  bool parkCar(const Car& car) {

    if (parkedCars.size() < capacity) {

      parkedCars.push_back(car);

      return true;

    } else {

      cout << "Parking lot is full!" << endl;

      return false;

    }

  }

  void displayParkedCars() const {

    cout << "Parked Cars:\n";

    for (const auto& car : parkedCars) {

      car.display();

    }

  }

};
class Employee_dept{
    public:
      string empname;
        int salary,id;
           string empname1;
        int salary1,id1;
        public:
    void ticket_dept(){
       
        cout<<"Enter employee name"<<endl;
        cin>>empname;
        cout<<"Enter id"<<endl;
        cin>>id;
        cout<<"Enter salary"<<endl;
        cin>>salary;

        

    }
    void displayt(){
        cout<<"Employee name is:"<<empname<<endl;
        cout<<"The id is : "<<id<<endl;
        cout<<"The salary is : "<<salary<<endl;
    }
        void tech_dept(){
     
        cout<<"Enter employee name"<<endl;
        cin>>empname1;
        cout<<"Enter id"<<endl;
        cin>>id1;
        cout<<"Enter salary"<<endl;
        cin>>salary1;
        }
           void displayte(){
        cout<<"Employee name is:"<<empname1<<endl;
        cout<<"The id is : "<<id1<<endl;
        cout<<"The salary is : "<<salary1<<endl;
    }

};
class price{
    public:
    int vehicle;
    public:
    void vehicle_price(){
        cout<<"Enter your vehicle type"<<endl;
        cin>>vehicle;
        if(vehicle==2){
            cout<<"price: 50"<<endl;
        }
        if(vehicle==3){
            cout<<"price: 75"<<endl;
        }
        if(vehicle==4){
            cout<<"price: 100"<<endl;
        }
    }

};

int main() {

  ParkingLot myParkingLot(10);

  Car car1("BC123", "Sanjay gore");

  Car car2("YZ457", "Janvi manse");

  Car car3("MN423", "Aliya kapse");

  Car car4("QR6124", "meena sharma");

  myParkingLot.parkCar(car1);

  myParkingLot.parkCar(car2);

  myParkingLot.parkCar(car3);

  myParkingLot.parkCar(car4);

  myParkingLot.displayParkedCars();
  employee_dept e1;
  e1.ticket_dept();
  e1.displayt();
  e1.tech_dept();
  e1.displayte();
  price p;
  p.vehicle_price();

  return 0;

}

/*

Car Class: Defines a car with a license plate and owner. It includes a constructor to initialize these attributes and a method to display car information.

ParkingLot Class: Manages a collection of cars using a std::vector and has a capacity limit. It provides methods to park a car and display all parked cars.

Main Function: Creates instances of Car, attempts to park them in an instance of ParkingLot, and then displays the parked cars.

*/