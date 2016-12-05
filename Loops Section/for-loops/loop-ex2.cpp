#include<iostream>
using namespace std;
int main(){
    /**
        Program #3: using for-loop get factorial of number 
            What Factorial -- 5! = 1 * 2 * 3 * 4 * 5
            multiplication from 1 to x number must be positive
    **/
    int n, factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        factorial *= i;   // factorial = factorial * i;
    }

    cout << "Factorial of " << n << " = " << factorial << endl;

    /**
        Program #4: using for-loop get sum of integers in number 
             5 = 1 + 2 + 3 + 4 + 5
    **/

    cout << "Enter a Number: ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;   // sum = sum + i;
    }

    cout << "Sum in "<< n << " = " << sum << endl;


    return 0;
}