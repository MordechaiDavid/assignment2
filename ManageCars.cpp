
#include <iostream>
#include <algorithm>
#include "ManageCars.h"
using namespace std;

ManageCars::ManageCars() {
    this->carArr = nullptr;
    this->numOfCars = 0;
}
void ManageCars::addCar(MyCar car) {
    if (this->numOfCars > 0){
        this->carArr = copyCars();
    } else {
        this->carArr = new MyCar[this->numOfCars+1];
    }
    this->carArr[this->numOfCars] = car;
    ++this->numOfCars;
}

ManageCars::~ManageCars() {
    deleteAll();
}

MyCar* ManageCars::copyCars() {
    MyCar* newCars = new MyCar[this->numOfCars+1];
    for (int i = 0; i < this->numOfCars; ++i) {
        newCars[i] = this->carArr[i];
    }
    delete [] this->carArr;
    return newCars;
}

void ManageCars::carsFromToYears(int fromYear, int toYear) {
    int* answer = nullptr;
    int count=0;
    for (int i = 0; i < this->numOfCars; ++i) {
        if(this->carArr[i].getYear() >= fromYear  && this->carArr[i].getYear() <= toYear)
            count++;
    }
    answer = new int[count];
    int index=0;
    for (int i = 0; i < this->numOfCars; ++i) {
        if(this->carArr[i].getYear() >= fromYear  && this->carArr[i].getYear() <= toYear){
            answer[index] = this->carArr[i].getLicenseNumber();
            index++;
        }
    }
    for (int i = 0; i < count; ++i) {
        cout<< answer[i]<<endl;
    }
}

void ManageCars::carsFromToPrices(int fromPrice, int toPrice) {
    int* answer = nullptr;
    int count=0;
    for (int i = 0; i < this->numOfCars; ++i) {
        if(this->carArr[i].getPrice() >= fromPrice  && this->carArr[i].getPrice() <= toPrice)
            count++;
    }
    answer = new int[count];
    int index=0;
    for (int i = 0; i < this->numOfCars; ++i) {
        if(this->carArr[i].getPrice() >= fromPrice  && this->carArr[i].getPrice() <= toPrice){
            answer[index] = this->carArr[i].getLicenseNumber();
            index++;
        }
    }
    for (int i = 0; i < count; ++i) {
        cout<< answer[i]<<endl;
    }
}

void ManageCars::printCar(int num) {
    for (int i = 0; i < this->numOfCars; ++i) {
        if (this->carArr[i].getLicenseNumber() == num)
            this->carArr[i].print();
    }
}

void ManageCars::deleteAll() {
    delete[] this->carArr;
}

void ManageCars::printAll() {
    int* arr = new int[this->numOfCars];
    for (int i = 0; i < this->numOfCars; ++i) {
        arr[i] = this->carArr[i].getLicenseNumber();
    }
    sort(arr, arr + this->numOfCars);
    for (int i = 0; i < this->numOfCars; ++i) {
        printCar(arr[i]);
        cout<<endl;
    }
}

void ManageCars::removeCar(int num) {
    MyCar* newCars = new MyCar[this->numOfCars -1 ];
    int index=0;
    for (int i = 0; i < this->numOfCars; ++i) {
        if (this->carArr[i].getLicenseNumber() != num ){
            newCars[index] = this->carArr[i];
            index++;
        }
    }
    delete[] this->carArr;
    this->carArr = newCars;
    --this->numOfCars;
}



