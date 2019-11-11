#include "baseClassGates.cpp"

class halfAdder : public Gates {

public:

void HA_Operation(int a, int b, int sum,int carry) {
	xorFunction(a, b, sum);
	andFunction(a, b, carry);
}

void HA_truthTable() {

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
int sum_temp,carry_temp1,carry_temp2;

void FA_Operation(int a, int b, int c, int sum, int carry) {
		HA_Operation(a, b, sum_temp, carry_temp1);
		HA_Operation(c, sum_temp, sum, carry_temp2);
		carry = carry_temp1|carry_temp2;
}

void FA_truthTable() {
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
void RA_Operation(int a[], int b[], int cin, int sum[], int carry[]) {
	FA_Operation(a[0],b[0],cin,sum[0],carry[0]);
	FA_Operation(a[1],b[1],carry[0],sum[1],carry[1]);
	FA_Operation(a[2],b[2],carry[1],sum[2],carry[2]);
	FA_Operation(a[3],b[3],carry[2],sum[3],carry[3]);
}

// void RA_truthTable() {
//    cout << "-----TRUTH TABLE FOR 3 BIT-----\n\n" << endl;
//    cout << "A\t\t" << "B\t\t" << "SUM\t\tCARRY" <<endl;

//    cout << "------------------------------------" << endl;

//}
};