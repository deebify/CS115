#include<iostream>
using namespace std;
int main(){

    float x; 
    int i = 0;
    float sum = 0;
    cout << "\t Enter 0 to Stop the App" << endl;
    while(cin >> x && x != 0) {
        cout << "Number " << i++ << ": " << x << endl;
        sum += x;
    }
    cout << "Entered: " << i  << " Numbers"<< endl;
    cout << "Sum: " << sum << endl;
    cout << "Average: "<< sum/i << endl;
    return 0;
}