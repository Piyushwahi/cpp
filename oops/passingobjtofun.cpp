//passing object to function 
//  check pass by value hai ya pass by refrence  
// ans pass by value hota hai and when we use ampercent operator then pass by refrence 
#include <iostream>
using namespace std ;
class car{ // what is car it is user defind data type which stores  2 string and 2 int 
    public:
    string name;
    int price;
    int seats;
    string type;

    void print(car c){// ⭐ before this we store in function defind parmeters example int x;float y ;
        //but know wee are storing user defind parmeter example  car 
        cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;
    }
    void change(car c){ //when use car& c the pass by refrence    passing an object to function 
        c.name = "TOTOYA FORTUNER";
    }
    
    //constructor
    car(){
        // default contructor 
    }



    car(string n , int p  ,int s , string t ){
        name = n;
        price = p;
        seats = s;
        type = t;
    }

};
int main(){
    car c1("Honda city",1500000,5,"sedan");

    // instant of doing this we  create a constructor anf format of constructor is object(parameter)
    // c1.name= "Honda city";
    // c1.price =  1500000;
    // c1.seats = 5;
    // c1.type =  "Sedan";

    car c2("Maruti swift", 700000, 5, "Hatchback");//2nd car information 
    // c2.name= "Maruti swift";
    // c2.price =  700000;
    // c2.seats = 5;
    // c2.type =  "Hatchback"; 


    car c3 ; //("Totoya Fortuner", 4000000, 8, "SUV") ;
    c3.name= "Totoya Fortuner";
    c3.price =  4000000;
    c3.seats = 8;
    c3.type =  "SUV";    
    
    
    // rather then writing this thing   like cout<<c1.name<<" " ...
    // just  create a function for print then call it  ezz
    c1.print(c1);//  c1.print(c1) why  not print(c1) boz i create function inside class so if i want to call function then use object name then ......print()  
    c2.print(c2);
    c2.print(c3);

//checking when we pass it to function then what happen 
    c1.change(c1);
    c2.change(c2); //pass by value 
    c2.change(c3);
    // check pass by value hai ya pass by refrence  


    c1.print(c1);
    c2.print(c2);
    c2.print(c3);
    return 0 ; 



}
