#include<iostream>
using namespace std;
int main(){
    
    /**
        Program#5 : Using Any Loop While or Do-While  
            to Sum on Ints
    **/

    float x = 1; // WHY ?? 
    float sum = 0;
    cout << "\t\t To End Loop Enter Number 0" << endl;
    do {
        cout<<">> ";
        cin>>x;
        sum += x;
    }
    while(x != 0.0);

    // Just Move while up and remove do ; 
    // while (x != 0.0){
    //     cout<<">> ";
    //     cin>>x;
    //     sum += x;    
    // }

    cout << "\t\t Total Sum of Entered = " << sum <<endl;




    return 0;
}