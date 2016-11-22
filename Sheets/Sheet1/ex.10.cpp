#include <iostream>
#include <cmath>
using namespace std;
main()
{
   float l,a,v,r;
   cout<<"Enter the length of a cube: \n";
   cin>>l;
   a=6*(l*l);
   v=l*l*l;
   r=sqrt(3)*(l/2);
   cout <<"Cube area= " << a <<endl;
   cout <<"Cube volume= "<< v <<endl;
   cout <<"Sphere radius= "<< r <<endl;
}

