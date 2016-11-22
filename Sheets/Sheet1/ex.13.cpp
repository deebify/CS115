#include<iostream>
using namespace std;
main()
{
   float r1,r2,r3,r4,rt;
   cout<<"Enter 3 resistance connected in parallel in circuit: "<<endl;
   cin>>r1>>r2>>r3;
   cout<<"Enter 1 resistance connected in series in circuit: "<<endl;
   cin>>r4;
   rt=((r1*r2*r3)/(r1+r2+r3))+r4;
   cout<<"Total R resistance= "<<rt<<endl;
}