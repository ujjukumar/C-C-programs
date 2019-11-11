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