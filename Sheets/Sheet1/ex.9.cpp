#include <iostream>
using namespace std;
main()
{
   float k,t;
   cout<<"Enter your speed in kilometers and time in hour: \n";
   cin>>k>>t;

   cout<<"Velocity= "<<k/t<<" km/h"<<endl;
   cout<<"Velocity= "<<k/(t*60)<<" km/m"<<endl;
   cout<<"Velocity= "<<(k*1000)/(t*60*60)<<" m/s"<<endl;
   cout<<"Velocity= "<<(k*1000)/(t*60)<<" m/m"<<endl;
}
