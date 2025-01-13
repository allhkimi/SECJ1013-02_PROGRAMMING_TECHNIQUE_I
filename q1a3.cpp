#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int SIZE = 5;
    int array1[SIZE], array2[SIZE], array3[SIZE * 2];

    cout << "Enter table array1:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Please enter an integer: ";
        cin >> array1[i];
    }
    cout << "Enter table array2:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Please enter an integer: ";
        cin >> array2[i];
    }
    for (int i = 0; i < SIZE; i++) {
        array3[i] = array1[i];
        array3[i + SIZE] = array2[i];
    }

    cout << "\nOUTPUT:" << endl;
    cout << "Table array3:" << endl;
    for (int i = 0; i < SIZE * 2; i++) {
        cout << array3[i] << " ";
    }
    cout << endl;

    double sum = 0;
    for (int i = 0; i < SIZE * 2; i++) {
        sum += array3[i];
    }
    double average = sum / (SIZE * 2);
    cout << fixed << setprecision(1);
    cout << endl;
    cout << "The average of ten numbers in array3 = " << average << endl;
    int max = array3[0];
    int min = array3[0];
    for (int i = 1; i < SIZE * 2; i++) {
        if (array3[i] > max) {
            max = array3[i];
        }
        if (array3[i] < min) {
            min = array3[i];
        }
    }

    int range = max - min;
    cout << "The range of values in array3 = " << range << endl;

    int odd_count = 0;
    for (int i = 0; i < SIZE * 2; i++) {
        if (array3[i] % 2 != 0) {
            odd_count++;
        }
    }

    cout << "The number of odd numbers in array3 = " << odd_count << endl;



    return 0;
}
