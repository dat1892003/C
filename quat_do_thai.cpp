#include <iostream>;
using namespace std;
#include <iostream>
using namespace std;

void drawPattern() {
    // Ph?n tr�n c?a h�nh
    for (int i = 0; i < 4; i++) { // 4 d�ng d?u
        for (int j = 0; j < i + 1; j++) {
            cout << "*"; // D?u * ph�a tru?c
        }
        for (int j = 0; j < 4 - i; j++) {
            cout << " "; // Kho?ng tr?ng gi?a
        }
        for (int j = 0; j < 4 - i; j++) {
            cout << "*"; // D?u * ph�a sau
        }
        cout << endl;
    }

    // Ph?n du?i c?a h�nh
    for (int i = 0; i < 3; i++) { // 3 d�ng du?i
        for (int j = 0; j < i + 2; j++) {
            cout << " "; // Kho?ng tr?ng ph�a tru?c
        }
        for (int j = 0; j < 5 - i; j++) {
            cout << "*"; // D?u * ph?n tr�i
        }
        for (int j = 0; j < i; j++) {
            cout << " "; // Kho?ng tr?ng gi?a
        }
        for (int j = 0; j < 2 - i; j++) {
            cout << "*"; // D?u * ph?n ph?i
        }
        cout << endl;
    }
}

int main() {
    drawPattern(); // V? h�nh
    return 0;
}
