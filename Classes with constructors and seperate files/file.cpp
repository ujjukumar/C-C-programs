#include "all_classes.h"

int main() {

    Info Ujju;
    Ujju.setValues("Ujjawal Kumar", "Dayananda Sagar College of Engineering", 20);
    cout << "\n\nThe Details of the person is as follows\n\n";
    cout << Ujju.getNames();
    cout << Ujju.getAge() << "\n\n" << endl;

    return 0;
}