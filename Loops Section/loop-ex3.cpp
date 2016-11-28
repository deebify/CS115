#include<iostream>
using namespace std;
int main(){
    /**
        Now, we can use While Loop.
        What about Do-While()

        it will enter the loop even if the condition is false 
        but only once. 

        So you know that it will be executed anyway 
        but only once if the condition is not valid  

    **/

    do
    {
        cout << "Once if not valid" << endl;
    } while(false);

    cout << endl << endl;
    cout << "That's it " << endl; 
    cout << endl << endl;

    int i = 0;
    do
    {
        cout << " i = " << i <<endl;
        i++;
    } while(i != 10);

    cout << endl << endl;

}