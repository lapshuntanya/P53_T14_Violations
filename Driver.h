#pragma once
#include "Violation.h"
#include "ArrayTemplate.h"

struct Driver {
    char name[100] = "";            //Імʼя водія
    char carNumber[10] = "";        //Номер авто
    int sizeViol = 0;               //Розмір масиву = Кількість порушень
    Violation* arr = nullptr;       //Масив порушень


    void fillDriver() {
        cout << "Input name: " ;
        cin.getline(name, 100);
        cout << "Input number of the car: ";
        cin>>carNumber;

        //Додаємо водієві 1 порушення
        sizeViol = 1;
        arr = new Violation[sizeViol];
        arr[0].fillViolation();
    }

    void showDriver() {
        cout << "DRIVER:     " << name << endl;
        cout << "CAR:        " << carNumber << endl;
        cout << "VIOLATIONS: " << sizeViol << endl;
        for (int i = 0; i < sizeViol; ++i) {
            cout << "#" << i+1 << "." << endl;
            arr[i].showViolation();
        }
        cout << "========================================\n\n";
    }

    void addViolationToDriver() {
        cout << "NEW VIOLATION:\n";
        Violation tmp;
        tmp.fillViolation();
        addItemBack(arr, sizeViol, tmp);
    }

    float calcTotalFine() {
        float sum = 0;
        for (int i = 0; i < sizeViol; ++i) {
            sum += arr[i].fine;
        }
        return sum;
    }
};