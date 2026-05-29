#pragma once
#include "DateMac.h"
#include <iostream>
#include <cstring>
using namespace std;


struct Violation {
    Date dateViol;           //дата порушення
    char info[100] = "";     //опис
    float fine = 0;          //сума штрафу

    void fillViolation() {
        cout << "Input date: ";
        //cin >> dateViol.day >> dateViol.month >> dateViol.year;
        dateViol.fillDate();

        //!!!!!!!!!!!
        cout << "Input description: ";
        cin.getline(info, 100);
        fine = rand() % 9000 + 100;
    }
    void showViolation() {
        cout << "\tDate: " << dateViol.toString("%d.%m.%Y") << endl; //07.01.2026
        cout << "\tInfo: " << info << endl;
        cout << "\tFine: " << fine << "UAH\n\n";
    }

};