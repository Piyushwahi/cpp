//Ques : Create a class ‘book’ with name, price and number of
// pages as its attributes. The class should contain following
// member functions :
// ● countBooks(int price) : This function will return count of all
// the books that have a price less than the given price.
// ● isBookPresent(string title) : This will return a boolean value
// indicating whether any book with the given title exists or not.




#include <iostream>
#include <string>
using namespace std ;
class book{
    private:
    string name;
    int price;
    int noofpages;
    //setter
    public:
    void setname(string s){
        name= s;
    }
    void setprice(int q){
        price = q;
    }
    void setnoofpages(int n){
        noofpages=n;
    }
    int countbook(int p){
        if(price<p){
            return 1;
        }
        else return 0;
    }
    int isbookpresent(string t){
        if(name==t){
            return true;

        }
        else return false;
    }
} ;

int main(){
    book oops;
    oops.setname("maths");
    oops.setprice(400);
    oops.setnoofpages(100);
    cout<<oops.countbook(600);
    cout<<endl;
    cout<<oops.isbookpresent("maths");
}




































//que 2 Ques : Find the error

// class emp{
//     int ecode;
//     class emp e;
//     }



//que 3 Ques : Create a class “cricketer” that contains name of
// cricketer, his age, number of test matches that he has played
// and the average runs that he has scored in each test match.
// Create an array of data type “cricketer” to hold records of 20
// such cricketers and then write a program to read these records
