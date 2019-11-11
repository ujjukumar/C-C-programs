#include "test.cpp"

int main() {

	int choice,loop=1,a,b,c;
	char tt_choice;
	cout << "\n Welcome to Our Program\n\n";

    while(loop==1) {

		cout << "Which operation do you want to execute\n" << endl;
		cout << "Half Adder  -  1" << endl;
		cout <<"Full Adder  -  2" <<endl;
		cout <<"Ripple Adder  -  3" << endl;

		cout << "Press the following keys as per your need : ";
		cin >> choice;

		if(choice==1) {
			cout << "\n Enter the value of A : ";
			cin >> a;
			cout << "\n Enter the value of B : ";
			cin >> b;

			if(a>=0 && a<=1 && b>=0 && b<=1) {
				halfAdder HA;
				cout << "\n The Sum is :" << HA.haSum(a,b);
				cout << "\n The Carry is :" << HA.haCarry(a,b);

				cout << "\n Do You want Truth Table of Half Adder? Then Press 'y' : ";
				cin >> tt_choice;

				if(tt_choice=='y') {
					HA.haTruthTable();
				}
			}

			else {
			cout<< "\n Value of A & B should be either 1 or 0 \n";
			}

			cout << "\n Press 1 to continue or press any other key to exit : ";
			cin >> choice;
			loop = choice;
		}

		if(choice==2) {
			cout << "\n Enter the value of A : ";
			cin >> a;
			cout << "\n Enter the value of B : ";
			cin >> b;
			cout << "\n Enter the value of C : ";
			cin >> c;

			if(a>=0 && a<=1 && b>=0 && b<=1) {
				fullAdder FA;
				cout << "\n The Sum is :" << FA.faSum(a,b,c);
				cout << "\n The Carry is : " << FA.faCarry(a,b,c);

				cout << "\n Do You want Truth Table of Half Adder? Then Press 'y' : ";
				cin >> tt_choice;

				if(tt_choice == 'y') {
					FA.faTruthTable();
				}
			}

			else {
			cout<< "\n Value of A & B should be either 1 or 0 \n";
			}

			cout << "\n Press 1 to continue or press any other key to exit : ";
			cin >> loop;
		}

		if(choice == 3) {

			int x[3] ={},y[3]={},z,s[3] = {},cr[3] = {};
			// int s1,s2,s3,s4,c1,c2,c3,c4;

			cout << "\n Enter the value of A : ";
			for(int i=0;i<4;i++)  {
				cin >> x[i];
			}
			cout << "\n Enter the value of B : ";
			for(int i=0;i<4;i++)  {
				cin >> y[i];
			}
			cout << "\n Enter the value of Carry Input : ";
			cin >> z;

			rippleAdder RA;
			// s1 = RA.raSum(x[0],y[0],z);
			// c1 = RA.raCarry(x[0],y[0],z);

			// s2 = RA.raSum(x[1],y[1],c1);
			// c2 = RA.raCarry(x[1],y[1],c1);

			// s3 = RA.raSum(x[2],y[2],c2);
			// c3 = RA.raCarry(x[2],y[2],c2);

			// s4 = RA.raSum(x[3],y[3],c3);
			// c4 = RA.raSum(x[3],y[3],c3);

			// cout << s1 << s2 << s3 << s4 << c4;
			cr[0] = z;
			for( int i = 1;i < 4; i++) {
				cr[i] = RA.raCarry(x[i], y[i], cr[i-1]);
			}

			for(int i=0 ;i<4 ;i++) {
				s[i] = RA.raSum(x[i],y[i],cr[i]);
			}

			cout << "\n The Ripple Sum is : " << "\t";
			for(int i=0 ;i<4 ;i++) {
				cout << s[3-i] << "\t";
			}

			cout << "\n And the Ripple Carry is : " << cr[3];

			cout << "\n Press 1 to continue or press any other key to exit : ";
			cin >> loop;
		}
	}
return 0;
}