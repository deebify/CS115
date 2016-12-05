#include<iostream>
using namespace std;
int main(){
    /**
        Program #5: calculate the power of the base number given the exponent
            for example -- given 2 as base and exponent as 3 
            should be 2^3 = 8 = 2 * 2 * 2 
            using loops write that program   
    **/
    int ex = 1;
    int base;
    cout << "Enter Base Number: ";
    cin >> base; 
    cout << "Enter its Exponent: ";
    cin >> ex;
    int res = 1;
    for (int i=1; i <= ex; i++){
        res *= base;
    }

    cout <<" pow ( " <<base <<" , " << ex << " ) = " << res <<endl;

    return 0;
}