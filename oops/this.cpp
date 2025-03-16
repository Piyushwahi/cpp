#include <iostream>
using namespace std ;
class cricketer{
    public:
    string name;
    int runs;
    float avg;
    //same variable name   karna ka liya this keyword use karta hai 
    //this use to indentify ki kona name ki baat kar raha ho
                     
    cricketer(string name, int runs,float avg){
        this->name = name; 
        this->runs = runs;
        this->avg = avg;
    }   
    void print(int runs){
        cout<<this->name<<" "<<this->runs<<" "<<this->avg<<endl ;
        cout<<runs<<endl;
    }
    int matches(){
        return runs/avg;
    }
}; 
int main(){
    cricketer c1("virat kohli" , 25000,45.8);
    cricketer c2("rohit sharma",18000,59.6);
    // cout<<c1.name<<" "<<c1.runs<<endl ;
    // cout<<c2.name<<" "<<c2.runs<<endl ; just call print 
    // c1.name = "sachin ";
    c1.print(6);
    c2.print(7);
    cout<<c1.matches()<<endl;
    cout<<c2.matches()<<endl;


}