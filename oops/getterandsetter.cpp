// class ka data member ko private kar do function public raho function can access  variable  ghar ka hi log hai function ka liya
#include <iostream>
using namespace std ;
class player{
    private://private //protected // they are access modifyer'
    int score;//data members
    int health;
    public:
    //setter  value ko set karna ka liya  input
    void  setscore(int s){
        score = s;
    }
    void sethealth(int h){
        health = h;
    }
    // getter use to get values
    int getscore(){
        return score;
    }
    int gethealth(){
        return health;
    }
    void showhealth(){  
        cout<<"health is :"<<health;

    }
    void showscore(){
        cout<<"my score is :"<<score;
    }
}; 


int main(){
    player piyush;
    // piyush.score=90; 
    // piyush.health=100; this bad practice is sai scurity issue hoga 
    piyush.setscore(10);
    piyush.sethealth(100);
    piyush.showhealth();
    cout<<endl;
    piyush.showscore();
    cout<<endl;
    cout<<piyush.gethealth();
} 