#include<iostream>
using namespace std;

double postageCostWest(double weight) {
    if (weight > 0.1) {
        return weight * 3.5;
    } else {
        return 0;
    }
}

double postageCostEast(double weight) {
    if (weight > 0.1) {
        return weight * 5;
    } else {
        return 0;
    }
}

int main(){

    int item_no=0, loc_optn=0, item_charged=0;
    float weight=0, postagecost = 0, sum_cost =0;
    
    cout << "Enter the number of items to process (1-10): ";
    cin >> item_no;

    for(int i=0; i < item_no ; i++){

        cout << "Choose location to send the item " << i+1  << endl;
        cout << "1. West Malaysia" << endl;
        cout << "2. East Malaysia" << endl;
        cin >> loc_optn; 

        cout << "Enter the weight for item " << i+1 << "  in kg.: ";
        reenterweight :
        cin >> weight;
        cout << endl;
        if (weight <= 0 || weight > 5) {
            cout << "Invalid weight. The weight must be between 0.1 and 5 kg." << endl;
            goto reenterweight;
        }

        switch(loc_optn){
            case 1 : postagecost = postageCostWest(weight);
                     break;
            case 2 : postagecost = postageCostEast(weight);
                     break;
            default : cout << "Invalid location. Please enter valid location or 'East Malaysia'." << endl;
                      --i; 
                      continue;
        }

        if (postagecost > 0) {
            item_charged++;
            sum_cost += postagecost;
        }

    }

    cout << "Total items charged :  " << item_charged << endl;
    cout << "Total overall postage cost :  RM" << sum_cost << endl;


    return 0;
}