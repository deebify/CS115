#include<iostream>
using namespace std;
main(){
    /**
        Switch will operate based on pre-defined cases you provide
        and there's a "defualt case" will execute if 
        given case not in the defined before and its optional
    **/

    /*
        Program: Check the character is Vowel or Consonant
        
        Basic Algorithm: 
            1- get user character
            2- switch the Vowel characters. 

            Wait ... WTF is Vowel or Consonant Character 
            Vowel = {a,e,i,o,u}
            Consonant = All Character - Vowel

            3- switch Vowel (5 cases + 5 cases (for capital))
            4- default is the Consonant Character. 

    */
    cout << "Program #3 -- Vowel-Consonant Character \n";
    char ch;
    cin >> ch; 

    switch (ch)
    {
        case 'a':
            cout << ch << " is Vowel Character \n";
            break;
        case 'e':
            cout << ch << " is Vowel Character \n";
            break;
        case 'i':
            cout << ch << " is Vowel Character \n";
            break;
        case 'o': 
            cout << ch << " is Vowel Character \n";
            break;
        case 'u':
            cout << ch << " is Vowel Character \n";
            break;
    default:
        cout << ch << " is Consonant Character" <<endl;
        break;
    }


}