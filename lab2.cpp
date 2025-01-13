#include <iostream>
using namespace std;

int main(){

    cout << "===================LAB EXCERCISE 2===================\n";
    float num1,num2,result;
    char oprtype, loopchr;

    do {
        cout << "Enter 2 numbers :\n" ;
        cin >> num1 >> num2;
        oprinput :
        cout << "Enter the mathematical operation you want to use (+, -, *, /): ";
        cin >> oprtype;
    
        switch(oprtype){

            case '+' : result = num1 + num2 ;
                       break;
            case '-' : result = num1 - num2 ;
                       break;
            case '*' : result = num1 * num2 ;
                       break;
            case '/' : result = num1 / num2 ;
                       break;
            default  : cout << "Invalid input. ";
                       goto oprinput;
        }
        
        cout << "First number :" << num1 << endl;
        cout << "Second number :" << num2 << endl;
        cout << "Mathematical Operation :" << oprtype << endl;
        cout << "Calculation Result :" << result << "\n\n";
        
        cout << "Do you want to end the program? (press Y to end the program) :";
        cin >> loopchr;


    }while(loopchr !='Y');

    return 0;
}