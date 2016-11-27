#include<iostream>
using namespace std;
int main(){
    /***
    We Need to repeat something again and again. 
    Utill no longer some point no need to repeat it.
    This is Loops. 
        We need to Control the Program by "Repetition".

    3 Kinds of Loops Expression:
        -> While Loop
        -> Do-While Loop 
        -> For Loop
        -> ?? () 

    Actually almost all can do the same thing. 
        which is Loop Over and Over again to some block of code. 

        Code will be repeated until condition no longer valid/true. 

        When test condition is true?
            Enter the Loooooooops until 
            that test condition at some point will be false .. 
            and loooooops will terminate/end 

        WTF is THAT ?? 
        


    Keep in mind: 
        -- test expression will be checked.
        -- test expression must be valid for amount of time.
        -- test expression must be no longer valid to exit loop.
        -- how long code will be repeated? 
        -- Is that loop will End/Terminate?
    ***/

    /**
        Program#1 : Print variable using While Loop 
    **/

    int x = 0; 
    // is that valid expression to start the loop
    while (x != 10){
        cout << x << endl; 
        ++x; // can we use x++;
        
        // What-if i just swap the last 2 statement
        //++x;
        //cout << x <<endl;
    }

    // What Actually Happen??
    /**
        1- Check test expression (x != 10) <-> ( 0 != 10 ) 
        2- is that true or false. 
        3- if true?
        4- repeat the following
            cout << x << endl;
            x++
        5- check test expression again  (x != 10) <-> (1 != 10)
        6- ...
        ..
        ..
        ..
        ..
        ..
        ..
        Until check test expression (x != 10) <-> (10 != 10)
         that expression is false;
        SO !!! 
        Finally
           "DO NOT ENTER THE GODDAMN LOOP"
           this is the termination / end of loop

    **/

    /**
        Program#2 : test expression condition using While Loop 
    **/

    // is that expression valid so it will let me enter the loop
    while (x != 10 ){
        cout << x <<endl;
        x++; 
    }

    // WHAT IF NO EXPRESSION / or EVERY TIME EXPRESSION IS VALID
    bool y = true;
    int z = 0; // change it to 1
    
    while(z){
        cout << "We're Fucked up with Loops" << endl;
    }

    while (y){
        cout << "We'll change the codition to be false \n";
        y = false;

    }




    return 0;
}