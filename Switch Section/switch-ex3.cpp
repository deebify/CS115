#include<iostream>
using namespace std;

main(){

    /**
        Program: build a Simple Calculator with Switch 

        Basic Algorithm: 
            1- enter char for the operator (+,-,*,/)
            2- enter 2 numbers 
            3- switch on char
            4- based on 4 cases execute calculation
            5- defualt is Error Invalid Operator
    **/
    cout << "Program #4 -- Simple Calculator with Switch \n";
    char op; 
    float x,y;
    cout << "Enter an operator (+,-,*,/) \n";
    cin >> op;
    cout << "Enter 2 Numbers \n";
    cin >> x >> y;

    // Switch on "op"
    switch (op)
    {
        default:
            cout << "Invalid Operator \n";
            break;
        case '+':
            cout << x << " + " << y << " = " << x+y << endl;
            break;
        case '-':
            cout << x << " - " << y << " = " << x-y << endl; 
            break;
        case '*':
            cout << x << " * " << y << " = " << x*y << endl;
            break;
        case '/':
            cout << x << " / " << y << " = " << x/y <<endl;
            break;
    } 

    return 0;
}