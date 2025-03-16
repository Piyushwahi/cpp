// what is object it is inheritance  of class 
// ::scopereulation operator use for samme....... example players::health = health   function 
//but we use this keyword  this     this->health = health  is class ka 
// two type memory in compiliar 
// static and dynamic
// static code run hona sai phala hi kuch chija store hojati hai inlinefunction and globle variable isma hum bolta hai staic load hogi hai 
// dynamic 
// create class which store player information  
// #include <iostream>
// #include <string>
// using namespace std;
// class players{
// private:
//     int health;
//     int age;
//     int score;
//     bool alive;
//     //setter 
// public:
//     void sethealth(int health){
//         this->health = health;
//         // players::health;
//     }
//     void setscore(int score){
//         this->score = score;
//     }
//     void setage(int age){
//         this->age = age;
//     }
//     void setalive(bool alive){
//         this->alive = alive;
//     }
//     //getter
//     int  gethealth(){
//         return health;
//     }
//     int  getscore(){
//         return score;
//     }
//     int getage(){
//         return age;
//     }
//     int getalive(){
//         return alive;
//     }
//     static int  addscore(players a, players b) {
//         return a.getscore() + b.getscore();
//     }

// };

//  //what is class it is also user deffi data type it means we can  use like parameter in function relate .....
// //  class ko passs kar sakta hu class ko return bhi to kar sakta hu 

// int main(){
//     players piyush ;
//     players raghav;
//     piyush.sethealth(100);
//     piyush.setscore(90) ;
//     piyush.setage(19);
//     piyush.setalive(true);  



//     raghav.sethealth(100);
//     raghav.setscore(60) ;
//     raghav.setage(27);
//     raghav.setalive(true);
//     //we can also  returnh our own created datatype 
//     // Correct way to call addscore
//     cout << "Total score: " << players::addscore(piyush, raghav) << endl;

// }

#include <iostream>
#include <iomanip>
using namespace std;
class circle{
    private:
    int r;
    float a,c;
    public:
    //constructor
    circle(int r){
        this->r = r;
    }
    circle(){
        this->r = 4;
    }
    void area(){
        a = 3.14*r*r;
    }
    void circumference(){
        c = 2*3.14*r;
    }
    void print (){
        cout<<"area is = :"<<fixed<<setprecision(3)<<a<<"  circumference = :"<<fixed<<setprecision(3)<<c;
    }
    // destructor   represted by ~
    ~circle(){
        cout<<"destructing "<<endl;
    }

    // printf("%.3f\n", num);  // Prints 9 decimal places
};
int main(){
    //1️⃣
    // // circle  obj;
    // int r;
    // cin>>r;
    // circle obj( r);
    // circle obj1;

    // // obj.getdata(r);
    
    // obj.area();
    // obj.circumference();
    // obj.print();
    // obj1.area();
    // obj1.circumference();
    // cout<<endl;
    // obj1.print();
    //2️⃣
    // int r;
    // cin>>r;
    // {
    // circle ob ;
    // ob.area();
    // ob.circumference();
    // ob.print();
    // }
    // circle ob1(r);
    // ob1.area();
    // ob1.circumference();
    // ob1.print();
    // }
    int r ;
    cin>>r;
    circle * p = new circle(5);
    p->area();
    p->circumference();
    p->print();
    delete p ;
}


