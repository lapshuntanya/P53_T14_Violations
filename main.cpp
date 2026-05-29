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

    Driver d2;
    d2.fillDriver(); //arr[0]
    d2.addViolationToDriver(); //arr[1]
    d2.addViolationToDriver(); //arr[2]

    cout << "----------------------------------------------------\n";

    d1.showDriver();
    d2.showDriver();

    return 0;
}