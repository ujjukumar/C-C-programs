#include "all_classes.h"
#include<iostream>

void Info::setValues(string x, string y, int z) {
            name = x;
            col_name = y;
            age = z;
        }

string Info::getNames() {
            cout << "Name : " << name;
            return  cout << "\nCollege name : ", col_name;
        }

int Info::getAge() {
            cout << "\nAge : ";
            return age;
        }