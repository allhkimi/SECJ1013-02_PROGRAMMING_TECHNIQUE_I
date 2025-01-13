#include <iostream>
using namespace std;

double getLength();
double getWidth();
double getArea(double, double);
void displayData(double, double, double);

int main() {
    double length=0, width=0, area=0;

    length = getLength();
    width = getWidth();
    area = getArea(length, width);
    displayData(length, width, area);

    return 0;
}

double getLength() {

    double length=0;
    cout << "Enter the rectangle's length: ";
    cin >> length;

    return length;
}

double getWidth() {

    double width=0;
    cout << "Enter the rectangle's width: ";
    cin >> width;

    return width;
}

double getArea(double length, double width) {
    return length * width;
}

void displayData(double length, double width, double area) {

    cout << "Rectangle's Length :  " << length << endl;
    cout << "Rectangle's Width :  " << width << endl;
    cout << "Rectangle's Area :  " << area << endl;

}
