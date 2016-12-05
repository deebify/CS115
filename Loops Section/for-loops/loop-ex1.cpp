#include<iostream>
#include<string>
using namespace std;
int main(){
    /**
        The most used form of loops that always used is for-loop 
        But Why? 

            because at each problem we know how many loops we need in order
            to stop that loops for example length of array, character.. 

        But Wait. 
        Is (for/while/do-while) different !! 
        

    **/
    
    /**
        Program #3 : Count for 0 to x using for-loops
    **/
    int x;
    cout << "Count from 0 to .." << endl;
    cin >> x;
    /*
        for (initialize_variables ,loop_condition ,update_statement)
            {
                loop_body
            }
    */
    for(int i=1; i < 10; i++){
        cout <<" " << i <<endl;
    }
    /**
    How For-Loop Actully Works? 
        1-> initialization statement is executed only once at the beginning of for.
        2-> Then, the test expression is evaluated either True/False.
        3-> If the test expression is false, for loop is terminated. 
        4-> But if the test expression is true, 
            codes inside body of for loop is executed and update expression is updated.
        
    LOOP Again, the test expression is evaluated and this process repeats until the test expression is false.


    **/
    return 0;
}