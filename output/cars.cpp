#include <iostream>
#include <string>
using namespace std;
class car
{
    public:
    string brand;
    string model;
    float max_speed;
    string colour;
    };
    int main()
    {
    car C1,C2;
    C1.brand="skoda";
    C1.model="kushaq";
    C1.max_speed=200;
    C1.colour="black";

    C2.brand="volkswagen";
    C2.model="virtus";
    C2.max_speed=220;
    C2.colour="white";
    
  cout<<C1.brand<<""<<C1.model<<""<<C1.max_speed<<""<<C1.colour<<endl;
  cout<<C2.brand<<""<<C2.model<<""<<C2.max_speed<<""<<C2.colour<<endl;
  return 0;
    }