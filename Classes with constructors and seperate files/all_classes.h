#include<iostream>
#include<string>

using namespace std;

class Info {

    string name,col_name;
    int age;

    public:

        void setValues(string x, string y, int z);

        string getNames();

        int getAge();
};