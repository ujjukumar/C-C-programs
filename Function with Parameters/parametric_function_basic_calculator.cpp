#include<iostream>

using namespace std;

int calc(int a, int b, int num) {
    bool test = true;
    int output;

    while (test)
        if (num == 1) {
            output = a+b;
            test = false;
        }
        else if (num == 2) {
            output = a-b;
            test = false;
        }
        else if (num == 3) {
            output = a*b;
            test = false;
        }
        else if (num == 4) {
            output = a/b;
            test = false;
        }
        else
        {
        cout << "Enter correct option plz" << endl;
        cout << endl << "Enter 1 for Sum, 2 for difference , 3 for multiplication and 4 for division : ";
        cin >> num;
        }

    return output;
}

int main() {

    int a,b,num;
    
    cout << endl << "Enter your first number : ";
    cin >> a;

    cout << endl << "Enter second number : ";
    cin >> b;

    cout << endl << "Enter 1 for Sum, 2 for difference , 3 for multiplication and 4 for division : ";
    cin >> num;

    cout << "Result is : " << calc(a,b,num) << endl;
}