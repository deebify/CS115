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
        Program : Find Maximum between 2 number in Switch Statement 
    **/
    
    int x,y;
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
    return 0;
}