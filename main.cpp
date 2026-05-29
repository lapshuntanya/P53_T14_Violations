#include "DateMac.h"
#include "Violation.h"
#include "Driver.h"
int main() {

    // Date d1;
    // d1.fillDate();
    // Date d2;
    // d2.getNowDate();
    // cout << "---------------\n";
    // d1.printDate();
    // d2.printDate();


    // Violation v1 = {{1, 1, 2000}, "Speed", 2000};
    // Violation v2;
    // v2.fillViolation();
    // cout << "---------------\n";
    // v1.showViolation();
    // v2.showViolation();



    Driver d1 = {"Pupkin Mykola", "AX1234KA", 2, new Violation[2] {
        {{1, 1, 2000}, "Speed", 2000},          //arr[0]
        {{4, 7, 2025}, "Parking", 350}          //arr[1]
    }};

    Driver d2 = {"Shevchenko Taras", "AX543212", 1, new Violation[1] {
        {{12, 4, 2026}, "Sign", 300}
    }};
    // d2.fillDriver(); //arr[0]
    // d2.addViolationToDriver(); //arr[1]
    // d2.addViolationToDriver(); //arr[2]
    //
    // cout << "----------------------------------------------------\n";
    //
    // d1.showDriver();
    // d2.showDriver();


    //main program
    int NDrivers = 0;
    Driver* arrDrivers = nullptr;

    addItemBack(arrDrivers, NDrivers, d1);
    addItemBack(arrDrivers, NDrivers, d2);

    int menu = 0;
    char text[100] = "";

    do {
        cout << "==================================================\n";
        cout << "\t MENU:\n";
        cout << "==================================================\n";
        cout << "0. Exit\n";
        cout << "1. Show all drivers\n";
        cout << "2. Add a new driver\n";
        cout << "3. Show info by number of the car\n";
        cout << "4. Add a new violation by number of the car\n";
        cout << "==================================================\n";
        cout << ">>> "; cin >> menu;

        switch (menu) {
            case 1: {
                for (int i =0; i < NDrivers; i++) {
                    cout << "#" << i+1 << ". " << arrDrivers[i].name << " " << arrDrivers[i].carNumber << endl;
                }
            }break;
            case 2: {
                Driver tmp;
                cin.ignore();
                tmp.fillDriver(); //getline(name, 100);
                addItemBack(arrDrivers, NDrivers, tmp);
            }break;
            case 3: {
                cout << "Input number:"; cin >> text;
                int id = -1;
                for (int i =0; i < NDrivers; i++) {
                    if (strcmp(text, arrDrivers[i].carNumber) == 0) {
                        id = i;
                        break;
                    }
                }

                if ( id == -1) cout << "Not found!\n";
                else arrDrivers[id].showDriver();
            }break;
            case 4: {
                cout << "Input number:"; cin >> text;
                int id = -1;
                for (int i =0; i < NDrivers; i++) {
                    if (strcmp(text, arrDrivers[i].carNumber) == 0) {
                        id = i;
                        break;
                    }
                }

                if ( id == -1) cout << "Not found!\n";
                else arrDrivers[id].addViolationToDriver();
            }break;
        }

    } while (menu!=0);

    return 0;
}