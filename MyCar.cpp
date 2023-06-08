#include "MyCar.h"
#include "string.h"
#include<iostream>
using namespace std;

char * MyCar::copyStr(char* dest, char* src) {
    if (src != nullptr){
        char * temp = new char[strlen(src)+1];
        strcpy(temp, src);
        return temp;
    }
    else{
        return dest;
    }
}

MyCar::MyCar(int licenseNumber, char *model, double price, int year,  char *color
        , double engineCapacity, char *chalkType,   char *madeCountry, int hand)
{
    this->licenseNumber = licenseNumber;
    this->model = copyStr(this->model, model);
    this->price = price;
    this->year = year;
    this->color = copyStr(this->color, color);
    this->engineCapacity = engineCapacity;
    this->chalkType = copyStr(this->chalkType, chalkType);
    this->madeCountry = copyStr(this->madeCountry, madeCountry);
    this->hand = hand;
}

void MyCar::print() {
    cout<< this->licenseNumber<<", "<< this->model<<", "<<this->price<<", "<<
        this->year<<", "<<this->color<<", "<< this->engineCapacity<<", "<< this->chalkType
        <<", "<<this->madeCountry<<","<< this->hand;
}

void MyCar::setLicenseNumber(int licenseNumber) {
    this->licenseNumber = licenseNumber;
}
int MyCar::getLicenseNumber() const {
    return this->licenseNumber;
}
void MyCar::setModel(char *model) {
    delete [] this->model;
    this->model = copyStr(this->model, model);
}
char* MyCar::getModel() const {
    return this->model;
}
void MyCar::setPrice(double price) {
    if (price > 0)
        this->price = price;
    else
        cout<<"Please enter positive number";
}
double MyCar::getPrice() const {
    return this->price;
}
void MyCar::setYear(int year) {
    this->year = year;
}
int MyCar::getYear() const {
    return this->year;
}

bool MyCar::compare(const MyCar& other) {
    if (this->year < other.year)
        return true;
    return false;
}
