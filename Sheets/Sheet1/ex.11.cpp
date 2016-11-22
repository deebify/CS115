#include <iostream>
using namespace std;
main()
{
    float x1,x2,y1,y2,S;
    cout<<"Enter p1(x1,y1): "<<endl;
    cin>>x1>>y1;
    cout<<"Enter p2(x2,y2): "<<endl;
    cin>>x2>>y2;
    S=(y2-y1)/(x2-x1);
    cout<<"Slope of this line: "<<S<<endl;

}
