#include<iostream>
#include<string>

using namespace std;

class Info {
    
    string name,col_name;
    int age;

    public:
        void setValues(string x, string y, int z) {
            name = x;
            col_name = y;
            age = z;
        }

        string getNames() {
            cout << "Name : " << name;
            return  cout << "\nCollege name : ", col_name;
        }

        int getAge() {
            cout << "\nAge : ";
            return age;
        }
};

int main() {

    Info Ujju;
    Ujju.setValues("Ujjawal Kumar", "Dayananda Sagar College of Engineering", 20);
    cout << "\n\nThe Details of the person is as follows\n\n";
    cout << Ujju.getNames();
    cout << Ujju.getAge() << "\n\n" << endl;

    return 0;
}