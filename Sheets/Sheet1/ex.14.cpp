#include <iostream>
#include <cmath>
using namespace std;
main()
{
   float r1,r2,r3,r4,r5,rt,v;
   cout<<"Enter 5 resistance connected in parallel in circuit: "<<endl;
   cin>>r1>>r2>>r3>>r4>>r5;
   rt=(r1*r2*r3*r4*r5)/(r1+r2+r3+r4+r5);
   cout<<"Enter the voltage used in circuit: "<<endl;
   cin>>v;
   cout<<"Intensity of Current = "<<v/rt<<endl;

}