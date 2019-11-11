#include<iostream>

using namespace std;

class Gates{
	
	public:

		int notGate(int input) {
			if(input==0)
				return 1;
			return 0;
		}

		int andGate(int firstInput,int secondInput) {
			if(firstInput==0 || secondInput==0)
				return 0;
			return 1;
		}

		int norGate(int firstInput,int secondInput) {
			if(firstInput==0 && secondInput==0)
				return 1;
			return 0;
		}

		int xorGate(int firstInput,int secondInput) {
			if(firstInput==secondInput)
				return 0;
			return 1;
		}

		int orGate(int firstInput, int secondInput) {
			if(firstInput==1 || secondInput==1)
				return 1;
			return 0; 
		}

		int nandGate(int firstInput, int secondInput) {
			if(firstInput==1 && secondInput==1)
				return 0;
			return 1;
		}
};


class halfAdder : public Gates {
	public:
		int haSum(int a, int b) {
			return xorGate(a, b);
		}

		int haCarry(int a, int b) {
			return andGate(a, b);
		}

		void haTruthTable() {
			cout << "-----TRUTH TABLE-----\n\n" << endl;
			cout << "A\t\t" << "B\t\t\t" << "SUM\t\tCARRY" <<endl;

			cout << "0\t\t" << "0\t\t\t" << "0\t\t0" <<endl;
			cout << "0\t\t" << "1\t\t\t" << "1\t\t0" <<endl;
			cout << "1\t\t" << "0\t\t\t" << "1\t\t0" <<endl;
			cout << "1\t\t" << "1\t\t\t" << "1\t\t1" <<endl;

			cout << "------------------------" << endl;
		}
};

class fullAdder : public halfAdder {
	public:
		int sum_temp,c1_temp,c2_temp;

		int faSum(int a, int b, int c) {
			return haSum(c,haSum(a,b));
		}

		int faCarry(int a, int b, int c) {
			return orGate(haCarry(a,b),haCarry(haSum(a,b),c));
		}

		void faTruthTable() {
			cout << "-----TRUTH TABLE-----\n\n" << endl;
			cout << "A\t\t" << "B\t\t" << "C\t\t\t" << "SUM\t\tCARRY" <<endl;

			cout << "0\t\t" << "0\t\t" << "0\t\t\t" << "0\t\t0" <<endl;
			cout << "0\t\t" << "0\t\t" << "1\t\t\t" << "1\t\t0" <<endl;
			cout << "0\t\t" << "1\t\t" << "0\t\t\t" << "1\t\t0" <<endl;
			cout << "0\t\t" << "1\t\t" << "1\t\t\t" << "0\t\t1" <<endl;
			cout << "1\t\t" << "0\t\t" << "0\t\t\t" << "1\t\t0" <<endl;
			cout << "1\t\t" << "0\t\t" << "1\t\t\t" << "0\t\t1" <<endl;
			cout << "1\t\t" << "1\t\t" << "0\t\t\t" << "0\t\t1" <<endl;
			cout << "1\t\t" << "1\t\t" << "1\t\t\t" << "1\t\t1" <<endl;

			cout << "------------------------------------" << endl;
		}
};

class rippleAdder : public fullAdder {
	public:

		int raCarry(int a, int b, int carryIn) {
			return faCarry(a,b,carryIn);
		}

		int raSum(int a, int b, int carryIn) {
			return faSum(a,b,carryIn);
		}
};