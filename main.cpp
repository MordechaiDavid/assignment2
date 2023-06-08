#include <iostream>
#include <string.h>
#include "ManageCars.h"
#include "MyCar.h"
using namespace std;
int main() {
    ManageCars manageCars;
    while (true) {
        cout << "---Welcome to second-hand car system---" << endl;
        cout << "Choose an option:" << endl;
        cout << "1- add car" << endl;
        cout << "2-remove a car" << endl;
        cout << "3-print cars between years" << endl;
        cout << "4-print cars in specific range cost" << endl;
        cout << "5-print all cars" << endl;
        int selected;
        cin >> selected;
        if (cin.fail()) {
            cout << "Invalid input please enter an integer." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            cout<<endl;
            continue;
        }
        switch (selected) {
            case 1: {
                cout << "Enter car details separate by space: license number, model, price, year, color,"
                        "engine capacity, chalk type, made country, hand" << endl;
                int licenseNumber, year, hand;
                double price, engineCapacity;
                char model[20];
                char color[20];
                char chalkType[20];
                char madeCountry[20];
                cin >> licenseNumber >> model >> price >> year >> color >> engineCapacity >> chalkType >> madeCountry
                    >> hand;
                MyCar car(licenseNumber, model, price, year, color, engineCapacity, chalkType, madeCountry, hand);
                manageCars.addCar(car);
                break;
            }
            case 2: {
                cout << "Enter the license number of a car to remove: " << endl;
                int licenseNumber;
                cin >> licenseNumber;
                manageCars.removeCar(licenseNumber);
                break;
            }
            case 3: {
                cout << "Enter a range of years separated by space (yyyy yyyy) ";
                int from, to;
                cin >> from >> to;
                manageCars.carsFromToYears(from, to);
                break;
            }
            case 4: {
                cout << "Enter the price range separated by a space ";
                int from, to;
                cin >> from >> to;
                manageCars.carsFromToPrices(from, to);
                break;
            }
            case 5: {
                cout << "Printing all the cars: " << endl;
                manageCars.printAll();
                break;
            }
            default:
                cout << "Enter only number between 1-5" << endl;
                break;
        }

        cout<<endl;
    }

/*    MyCar car1(1111, "aaaa", 6000, 1999,
               "gray", 1.6, "auto",
               "Italy", 2 );
    MyCar car2(2222, "bbbb", 1000, 2019,
               "gray", 1.6, "auto",
               "germany", 2 );


    ManageCars manageCars;
    manageCars.addCar(car1);
    manageCars.addCar(car2);
    manageCars.printCar(1111);
    cout<<""<<endl;
    manageCars.printCar(2222);
    cout<<""<<endl;
    cout<<car1.compare(car2)<<endl;
    manageCars.printAll();*/

    return 0;
}

