#include <iostream>
using namespace std;
main()
{
   float r1,r2,r3,rt;
   cout<<"Enter 3 Resistance connected in parallel: "<<endl;
   cin>>r1>>r2>>r3;
   rt=(r1*r2*r3)/(r1+r2+r3);
   cout<<"Total R resistance= "<<rt<<endl;

}
