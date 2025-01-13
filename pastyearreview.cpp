#include<iostream>
using namespace std;

int main(){

int a, b = 2, c, d = 1, e;
float p = 3.0, q;
a = b * d++;
c = ++a / 2 + d;
b += a + c % 2;
d *= (b - 1) / c;
p = c * p / 5;
e = --p + 2;
q = static_cast<float>(e / 5) * d;

cout << "a = " << a << endl;
cout << "b = " << b << endl;
cout << "c = " << c << endl;
cout << "d = " << d << endl;
cout << "e = " << e << endl;
cout << "p = " << p << endl;
cout << "q = " << q << endl;

return 0;

}