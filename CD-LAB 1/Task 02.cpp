#include <iostream>
using namespace std;

int main() {
    int i, n;

    cout << "Enter the size of the array: ";
    cin >> n;

    float arr[n];
    cout << "\n";

    for(i = 0; i < n; ++i) {
        cout << "Enter number " << i + 1 << " : ";
        cin >> arr[i];
    }

    float largest = arr[0];
    float smallest = arr[0];

    for(i = 1; i < n; ++i) {
        if(arr[i] > largest) {
            largest = arr[i];
        }

        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << "\n";
    cout << "Largest number = " << largest << endl;
    cout << "Smallest number = " << smallest << endl;

    return 0;
}
