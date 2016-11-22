#include <iostream>
using namespace std;
 
int main()
 
{
    int urd, urm,ury,cd,cm,cy,rd,rm,ry;
    cout<<"Enter your birthday"<<endl;
    cin>>urd>>urm>>ury;
 
    cout<<"Enter the current date"<<endl;
    cin>>cd>>cm>>cy;
 
    if(urd>cd)
    {
       
      switch(cm)
      {
      case 4:case 6:case 9:case 11: cd+=30;
                                    break;
      case 1:case 3:case 5:case 7: case 8: case 10: case 12:cd+=31;
                                                             break;
      case 2: if (cy%4==0)
                  cd+=29;
               else
                   cd+=28;
               break;
 
      }
       
    cm--;
    }
////////////////////////////////////////////////
     
    if(urm>cm)
    {
      cm+=12;
      cy--;
    }
 
    rd=cd-urd;
    rm=cm-urm;
    ry=cy-ury;
    cout<<"your birthday is "<<rd<<":"<< rm<<":"<<ry<<endl;
return 0;
}
