#include "baseClassGates.cpp"

class halfAdder : public Gates {

    public:
    
        int operation(int a, int b, int sum,int carry) {
            sum = xorFunction(a, b);
            carry = andFunction(a, b);
        }

        int truthTable() {

            cout << "-----TRUTH TABLE-----\n\n" << endl;
            cout << "A\t\t" << "B\t\t\t" << "SUM\t\tCARRY" <<endl;
            cout << "0\t\t" << "0\t\t\t" << "0\t\t0" <<endl;
            cout << "0\t\t" << "1\t\t\t" << "1\t\t0" <<endl;
            cout << "1\t\t" << "0\t\t\t" << "1\t\t0" <<endl;
            cout << "1\t\t" << "1\t\t\t" << "1\t\t1" <<endl;
            cout << "------------------------" << endl;
        }
};