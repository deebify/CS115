#include<iostream>
using namespace std;
int main(){
    /**
     Switch Statement -- a Conditional Control Statement (Like if-else)
     will let you make decision based on defined "cases" 
     unlike if-else which based on (YES/NO TRUE/FALSE)

     Switch is used to check the value of the variable
     rather than use nested-if-else Statement 
     and execute a block of code {} 

     Switch is usually faster than nested if-else statement 
     which in Switch, you will provide number of choices "cases"

    **/
    
    /**
        Program : Find Maximum between 2 number using Switch Statement 
    **/
    
    int x,y;
    cout << "Program #1 -- Max between 2 Numbers \n";
    cout << "Enter 2 Integers (X,Y) \n";
    cin >> x >> y;

    switch (x > y)
    {
        case 0:
            cout << y <<" is the Maximum"<<endl;
            break;
        case 1:
            cout << x <<" is the Maximum"<<endl;
            break;
    default:
        break;
    }
    
    /*
        Program : Check the Number is Even or Odd using Switch Statement. 
    */
    cout << "Program #2 -- Check Even/Odd Number \n";
    int number;
    cin >> number;
    switch (number % 2)
    {
        case 0: // number % 2 == 0 
            cout << "Number "<< number << " is Even!"<<endl;
            break;
        case 1: // number % 2 == 1
            cout << "Number "<< number << " is Odd!"<<endl;
            break;
    default:
        cout << "WTF!!" <<endl;
        break;
    }

    return 0;
}