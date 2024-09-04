#include <iostream>

using namespace std;

int main() {
    int operation = 0, a, b;
    while (1) {
        cout << "choose the operation you would like to perform:\n 1.Addition \n 2.Subtraction\n 3.Multiplication\n 4.Divison\n 5.Quit" << endl;
        cin >> operation;
        if (operation == 5) {
            return 0;
        }
        cout << "write any two variables" << endl;
        cin >> a >> b;

        switch (operation) {
        case 1:
            cout << a + b;
            break;

        case 2:
            cout << a - b;
            break;
        case 3:
            cout << a * b;
            break;
        case 4:
            if (b == 0){
              cout << "b cannot be 0" << endl;
              break;
            }
            cout << a / b;
            break;
        case 5:
            return 0;
        default:
            cout << "Enter valid value" << endl;
        }
        cout << endl << endl;

    }
    return 0;
}
