#include <iostream>
using namespace std;

void T1(int &A, int B = 0) {
    int C;
    B = A-- + B - 2;
    A += B;
    C = A - B;
    cout << A << " " << B << " " << C << endl;
}

void T1(int &A, int &B, int C, int D = 2) {
    C += ++A - B;
    B = 2 * C + D;
    cout << A << " " << B << " " << C << " " << D << endl;
}

int main() {
    int n1 = 3, n2 = 2;
    T1(n2);
    T1(n1, n2);
    cout << n1 << " " << n2 << endl;
    T1(n2, n1,2);
    cout << n1 << " " << n2 << endl;
    T1(n1, n2, n1 - n2, 3);
    cout << n1 << " " << n2 << endl;
    return 0;
}




