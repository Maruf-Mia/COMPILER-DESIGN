#include <iostream>
using namespace std;

int main() {
    string str1, str2;
    cout << "Enter your first name: ";
    cin >> str1;
    cout << "\nEnter your last name: ";
    cin >> str2;
    cout << "\nYour full name is: " << str1 + " " << str2 << endl;
    return 0;
}
