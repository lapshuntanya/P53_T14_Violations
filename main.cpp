#include "DateMac.h"
#include "Violation.h"
int main() {

    // Date d1;
    // d1.fillDate();
    // Date d2;
    // d2.getNowDate();
    // cout << "---------------\n";
    // d1.printDate();
    // d2.printDate();


    Violation v1 = {{1, 1, 2000}, "Speed", 2000};
    Violation v2;
    v2.fillViolation();
    cout << "---------------\n";

    v1.showViolation();
    v2.showViolation();


    return 0;
}