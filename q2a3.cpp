#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void input(int item_no[], double price[], int discount[], int &num_items);
void output(int item_no[], double price[], int discount[], int num_items);

int main() {
    const int max_items = 100;
    int item_no[max_items];
    double price[max_items];
    int discount[max_items];
    int num_items = 0;

    input(item_no, price, discount, num_items);
    output(item_no, price, discount, num_items);

    return 0;
}

void input(int item_no[], double price[], int discount[], int &num_items) {
    ifstream infile("input.txt");

    if (!infile) {
        cerr << "Error: Unable to open input file!" << endl;
        exit(1);
    }

    num_items = 0;
    while (infile >> item_no[num_items] >> price[num_items] >> discount[num_items]) {
        num_items++;
    }

    infile.close();
}

void output(int item_no[], double price[], int discount[], int num_items) {
    cout << "Number of items on sale" << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << right << setw(10) << "Item No" << setw(10) << "Price" << setw(15) << "Discount(%)" << setw(20) << "Price after discount" << endl;

    for (int i = 0; i < num_items; i++) {
        double price_after_discount = price[i] - (price[i] * discount[i] / 100.0);
        cout << right << setw(10) << item_no[i] << setw(10) << price[i] << setw(15) << discount[i] << setw(20) << price_after_discount << endl;
    }
}
