#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    float arr[n], sum = 0, avg;
    for(int i = 0; i < n; ++i) {
        cout << "Enter Number " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }

    avg = sum / n;

    cout << "Average of above " << n << " numbers = " << avg << endl;
    return 0;
}
