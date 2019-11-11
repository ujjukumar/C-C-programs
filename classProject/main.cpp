#include "derivedClasses.cpp"

int main() {
int x,y,z,sum,carry,carry_in;
int choice, bit_size;
char truthtable_choice;
int a[] = {}, b[] = {}, rsum[] = {}, rcarry[] = {};

cout << "Which operation do you want to execute" << endl;
cout << "Half Adder  -  1"<< endl;
cout <<"Full Adder  -  2"<<endl;
cout <<"Ripple Adder  -  3" << endl;

cout << "Press the following keys as per your need : ";
cin >> choice;

if (choice == 1) {

cout<<"enter x values";
cin >> x;
cout << "Enter Y value";
cin >> y;

halfAdder HA1;
HA1.HA_Operation(x,y,sum,carry);

cout << "The Sum is : " << sum << endl;
cout << "and Carry is : " << carry << endl; 


cout<<"Do u want Truth Table of Half Adder? then press 'y' "<<endl;
cin>>truthtable_choice;
if(truthtable_choice=='y')
	HA1.HA_truthTable();
}

else if (choice == 2) {

cout << "Enter X Y and Z values for Full Adder\n";
cin >> x >> y >> z;

fullAdder FA1;
FA1.FA_Operation(x,y,z,sum,carry);
cout << "The Sum is : " << sum << endl;
cout << "and Carry is : " << carry << endl; 

cout<<"Do u want Truth Table of Full Adder? then press 'y' "<<endl;
cin >> truthtable_choice;
if(truthtable_choice == 'y')
	FA1.FA_truthTable();
}

else if (choice==3) {

cout << "Enter the no. of bits you want for Ripple Carry Adder : ";
cin >> bit_size;

cout << "Enter First Input\n";
for(int i=0;i < bit_size; i++) {
	cin >> a[i];
}

cout << "Enter Second Input\n";
for(int i=0;i < bit_size; i++) {
	cin >> b[i];
}

cout << "Enter Cin Value : ";
cin >> carry_in;

rippleAdder RA1;
RA1.RA_Operation(a, b, carry_in, rsum, rcarry);

cout << "The Sum is : " << rsum << endl;
cout << "and Carry is : " << rcarry << endl;

}

cout << "END";
}