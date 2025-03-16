// //class variable 1 declaration 2 intialization 3 accessing 
// // 1data member 
// // 2 member function 
#include <iostream>
using namespace std ;
class player{
    public://private //protected // they are access modifyer'
    int score;//data members
    int health;
    void showhealth(){ //member function  now this function is not exist bcoz it is blueprint  useable tab hoga jab iska object bna ga 
        cout<<"health is :"<<health;

    }
    void showscore(){
        cout<<"my score is :"<<score;
    }
}; 
// protected read when  inheritance  atart 
class calculator{
    public:
    int  a; //int a = 10 initializing 
    int b;
    void  sumof(){
        cout<<a+b<<endl;
    }
    void subtract(){
        cout<<a-b;
    }


};

int main(){
    //what is piyush  it is   object 
    // how to create object first name of class then name of boject what ever 
    player piyush;// ismain main koi value da sakta hu nahi kyu piyush can store 2int and 1 char
    piyush.score=90; //access data member 
    piyush.health=100;
    piyush.showhealth();//but this function  belong to classs how we can  call?  by using  object name konsa  piyush 
    cout<<endl;
    // cout<<piyush.name<<endl;
    piyush.showscore();
    cout<<piyush.health<<endl;
    cout<<piyush.score<<endl;
    //creating calculator object tabhi to sumof and sub ko call kar paya ga 
    calculator calsi;
    calsi.a= 9;
    calsi.b= 5;
    calsi.sumof();
    calsi.subtract();
}
 //piyush.showhealth()<<endl;
// showhealth() is a void function, meaning it does not return a value. You cannot use << endl with it.
// Fix: Call showhealth() and then use cout << endl; separately.


//⭐extra
// #include <cstdio>
//
// int main() {
//     double num = 3.141592653589;
//     printf("%.9f\n", num);  // Prints 9 decimal places
//     return 0;
// }
