//class basically blueprint   hota hai 
//   class kasa call hogi object ka base  pay 

// object orirnted programming 
//in interview may be ask concept of oops 
// in this we use classes or objects
// 1 data abstruction // like bgmi bp point show alive player show but in backend hide i see only point  (security) best 

// 2 data encapsulation // multiple things add in single container ka inside dall diya 
//all data can  store in single unit 
//3 inheritance // blueprint  my class  is player bgmi new update relate kar lana new class zombie inheritance of player classall properties of player come in zombie class 
//4 ploymorphism   // simliar code sai  different functionality achive kar lata hai function ka liya jada imp  
// this concept  may be ask in my interview so be prepare  2 time ask in sir interview


// what are classes like blueprint   idea  map   now its not storing memory
// class is a user defined  datatype 
//example int int can store  number 
// final example 
// class player{ // player is user defined data type 
//     int health;
//     int score;
//     string name;
// }
// i created a datatype which  store 2 int  1string in single unit 
#include <iostream>
using namespace std ;
class player{
    public://private //protected // they are access modifi    
    int score;//data members
    int health;
}; 
//protected read when  inheritance 


int main(){
    //what is player it   is an object 
    player player1;// player1 can store 2int 
    player player2;
    player1.score=90;
    cin>>player1.health;//taking  input 
    player2.health =  100;
    player2.score = 10 ;
    // cout<<piyush.name<<endl;
    cout<<player1.health<<endl;
    cout<<player1.score<<endl;
    cout<<player2.health<<endl;
    cout<<player2.score<<endl;
}


