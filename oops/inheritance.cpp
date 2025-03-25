// mari ek class already bni hai  uska data membe ror data function   muja new class main chiya to use kar sakta hu  exmaple 
 //single inheritance hai ya   cpp. search in file manger 
#include <iostream>
using namespace std;
class  scooty{ //parent class
public:
    int topspeed;
    float mileage :
private:
    int bootspace; 

};
// CLASS BIKE EXTENTS SCOOTY MEANS ISMA JO HAI VO TO HAI HI  scooty ki all things bhi hai isma 
// function overwriting means same function name present in child  and parent)( how can i access the  function of     parent by object name of child class nameof parent class:: function name 
class  bike: public scooty{ //child class or derived class hai 
public:
    int gear;
};

int main(){
    bike b1 ;
    b1.topspeed = 98;
    b1.gear = 6;
    b1.mileage = 12.5;
   cout<<b1.topspeed;
//    now i cann acess bootspace bcoz it private
}



