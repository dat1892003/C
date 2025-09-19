#include <iostream>;
using namespace std;
#include <iostream>
using namespace std;

void drawPattern() {
    // Ph?n trên c?a hình
    for (int i = 0; i < 4; i++) { // 4 dòng d?u
        for (int j = 0; j < i + 1; j++) {
            cout << "*"; // D?u * phía tru?c
        }
        for (int j = 0; j < 4 - i; j++) {
            cout << " "; // Kho?ng tr?ng gi?a
        }
        for (int j = 0; j < 4 - i; j++) {
            cout << "*"; // D?u * phía sau
        }
        cout << endl;
    }

    // Ph?n du?i c?a hình
    for (int i = 0; i < 3; i++) { // 3 dòng du?i
        for (int j = 0; j < i + 2; j++) {
            cout << " "; // Kho?ng tr?ng phía tru?c
        }
        for (int j = 0; j < 5 - i; j++) {
            cout << "*"; // D?u * ph?n trái
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
    drawPattern(); // V? hình
    return 0;
}
