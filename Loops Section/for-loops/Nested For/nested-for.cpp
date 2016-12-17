#include<iostream>
using namespace std;
int main(){
   int x;
   cout << "Enter Number of Line to Show Stars Shape: ";
   cin >> x;
 for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout << "*";
        }
        cout <<endl;
    }


 for(int i=1;i<=x;i++){
        for(int j=x;j>=i;j--){
            cout << "*";
        }
        cout <<endl;
    }
}
