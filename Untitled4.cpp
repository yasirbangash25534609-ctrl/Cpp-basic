#include <iostream>
using namespace std;

int main() {
    int a;
    float b;
    char c;

    cout << "Enter an integer: ";
    cin >> a;

    cout << "Enter a float (e.g., 0.99): ";
    cin >> b;

    cout << "Enter a character: ";
    cin >> c;

    // Displaying the values
    cout << "\n--- Your Data ---" << endl;
    cout << "Integer: " << a << endl;
    cout << "Float: " << b << endl;
    cout << "Character: " << c << endl;

    return 0;
}

