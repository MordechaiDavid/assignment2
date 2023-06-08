//
// Created by Morde on 6/6/2023.
//

#ifndef ASSIGNMENT2_MANAGECARS_H
#define ASSIGNMENT2_MANAGECARS_H


#include "MyCar.h"

class ManageCars {
public:
    MyCar* carArr;
    int numOfCars;
public:
    ManageCars();
    ~ManageCars();
    void addCar(MyCar car);
    void removeCar(int num);
    void carsFromToYears(int fromYear, int toYear);
    void carsFromToPrices(int fromPrice, int toPrice);
    void printCar(int num);
    MyCar* copyCars();
    void deleteAll();
    void printAll();

};



#endif //ASSIGNMENT2_MANAGECARS_H
