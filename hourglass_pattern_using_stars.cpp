//Name : Ishan Danech
//PRN : 24070123047
//Batch : ENTC A2
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows for the upper half: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int k = 0; k < 2 * (n - i) - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}