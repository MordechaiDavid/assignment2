//
// Created by Morde on 6/6/2023.
//

#ifndef ASSIGNMENT2_MYCAR_H
#define ASSIGNMENT2_MYCAR_H


class MyCar {
private:
    int licenseNumber;
    char* model;
    double price;
    int year;
    char* color;
    double engineCapacity;
    char* chalkType;
    char* madeCountry;
    int hand;
public:
    MyCar(int licenseNumber,  char *model, double price, int year,
           char *color, double engineCapacity,  char *chalkType, char *madeCountry, int hand);
    MyCar() = default;
    int getLicenseNumber() const;

    void setLicenseNumber(int licenseNumber);

    char *getModel() const;

    void setModel(char *model);

    double getPrice() const;

    void setPrice(double price);

    int getYear() const;

    void setYear(int year);

    char *getColor() const;

    void setColor(char *color);

    double getEngineCapacity() const;

    void setEngineCapacity(double engineCapacity);

    char *getChalkType() const;

    void setChalkType(char *chalkType);

    char *getMadeCountry() const;

    void setMadeCountry(char *madeCountry);

    char *getHand() const;

    void setHand(char *hand);

    char * copyStr(char* dest, char* src);

    void print();

    bool compare(const MyCar& other);

};


#endif //ASSIGNMENT2_MYCAR_H
