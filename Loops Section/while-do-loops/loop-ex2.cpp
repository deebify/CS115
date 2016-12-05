#include<iostream>
using namespace std;
int main(){

    /**
        Program#3 : Using the While Loop, 
            Show me the Multiplication Table
            for the table 6 

            Multiplication table: 
            1 x 6 = 6 
            2 x 6 = 12 
            3 x 6 = 18
             ...
             ...
             ...
            10 x 6 = 60 

            Note that there's a variable that 
            increament by 1 every step in loop 
             
    **/
    int inc = 0;
    int mul = 6;

    while (inc != 10){
        inc++; 
        cout << inc << " x " << mul << " = " << inc * mul << endl;
    }


    /**
        Program#4 : Using the While Loop, 
            Calculate the Sum of Natural Numbers from 1 to N 

            WHAT THAT EVEN MEAN? 
                Suppose that variable x = 8
                    all integers in x is {1 2 3 4 5 6 7 8}
                    sum them = {1 + 2 + 3 + 4 + 5 + 6 + 7 + 8}
                    = 15 
    **/

    int x = 8;
    int sum = 0;
    int i = 1; 
    while(i <= x){
        sum += i;
        i++; // what if we use ++i; 
        // what if we dont use it at all
    }

    cout << "SUM in X = " << x << " is  " << sum <<endl;

    return 0;
}