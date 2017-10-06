#include <iostream>

using namespace std;

int main ()
{
 const float foot=12;
 const float meter=0.0254;
 const float kg=2.2;
 
 cout <<"vvedite vash rost v futah i duymah ";
 float rost;
 cin >> rost;
 
 cout <<"vvedite vash vesv funtah ";
 float ves;
 cin >>ves;
 
 float f1 = rost*foot;
 float m1 = f1*meter;
 float k1=ves/kg;
 
 float imt=k1 / (m1*m1);
 
 cout <<"vash imt= "<<imt ;
 return 0;
 }
 
  
 
