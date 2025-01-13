#include <iostream>
using namespace std;

int main() {
    int marks[10]; 
    float total = 0;  
    float average;  

    for (int i = 0; i < 10; i++) {
        cout << "Enter marks for student " << i + 1 << ": ";  
        cin >> marks[i];  
        total += marks[i];
    }

    average = total / 10;

    cout << "Total marks of all students: " << total << endl;
    cout << "Average marks: " << average << endl;

    return 0;  
}
