#include<iostream>
#include<math.h>

using namespace std;

class Gates {

    public:

        int andFunction(int ip1, int ip2, int out) {
            out = ip1&ip2;
        }

        int orFunction(int ip1, int ip2, int out) {
            out = ip1|ip2;
        }

        int notFunction(int ip1,int out) {
            out = !ip1;
        }

        int xorFunction(int ip1, int ip2, int out) {
            
            if(ip1==ip2) {
                out = 0;
            }
            else {
                out = 1;
            }
        }

        int norFunction(int ip1, int ip2, int out) {
            out = !orFunction(ip1, ip2, out);
        }

};

class ffActions {

    public:
        int output[];

        int set(int out[]) {
            out[0] = 1;
            out[1] = 0;
        }

        int reset(int out[]) {
            out[0] = 0;
            out[1] = 1;
        }

        int toggle(int j, int k, int out[]) {
            out[0] = !j;
            out[1] = !k;
        }

        int noChange(int j, int k, int out[]) {
            out[0] = j;
            out[1] = k;
        }
};

//For Testing the classes functions
// int main() {

//     Gates g1;
//     std::cout << g1.xorFunction(1,1) <<endl;
//     std::cout << g1.norFunction(1,1);

//     return 0;
// }