#include <iostream>
using namespace std ;
class fraction{
    public:
    int  num ;
    int den;
    fraction(int num, int den){ //constructor 
        this->num = num;
        this->den = den;

    }
    void display(){
        cout<<num<<"/"<<den;
    }
    fraction operator+(fraction f){
        int newnum = this->num*f.num + this->den*f.den;
        int newden = this->den*f.den;
        fraction ans(newnum,newden);
        return ans;
        // hw how to smplify particular fraction  or function 
             
    }
 
};
int main(){
    fraction f1(1,2);
    fraction f2(3,4);
    f1.display();
    cout<<endl;
    f2.display();
    cout<<endl;
    // fraction f3 = f1.add(f2); further of doing this we use oprator in this case ex
    fraction f3 = f1+f2;
    f3.display();



}